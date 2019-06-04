#include<iostream>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
void create(struct node**link,int val)
{
	struct node*nnew=(struct node*)malloc(sizeof(struct node));
	nnew->data=val;
	nnew->next=*link;
	*link=nnew; 	
}
void insert_after(struct node** link,int val,int pos)
{
	if(*link==NULL)
	{
		cout<<"cannot insert untill a list is created";
		return;
	}
	struct node*temp=*link;
	struct node*nnew=(struct node*)malloc(sizeof(struct node));
	nnew->data=val;
	for(int i=0;i<pos-1 && temp!=NULL;i++)
	{
		temp=temp->next;
	}
	if(temp==NULL || temp->next==NULL)
	{
		cout<<"position is empty";
		return;
	}
	nnew->next=temp->next;
	temp->next=nnew;
}
void remove(struct node** link,int pos)
{
	if(*link==NULL)
	{
		cout<<"list is empty";
		return;
	}
	struct node*nnew=*link;
	if(pos==0)
	{
		cout<<"cant remove 0th position";
		return;
	}
	for(int i=0;i<pos-1 && nnew!=NULL;i++)
	{
		nnew=nnew->next;
	}
	if(nnew==NULL || nnew->next==NULL)
	{
		cout<<"position is empty";
		return;
	}
	struct node*next_node=nnew->next->next;
	free(nnew->next);
	nnew->next=next_node;
}
bool search(node* head, int x)  
{  
    node* current = head; // Initialize current  
    while (current != NULL)  
    {  
        if (current->data == x)  
            return true;  
        current = current->next;  
    }  
    return false;  
}
void append(struct node** link,int val)
{
	struct node*nnew=(struct node*)malloc(sizeof(struct node));
	struct node*last=*link;
	nnew->data=val;
	nnew->next=NULL;
	if(*link==NULL)
	{
		*link=nnew;
	}
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=nnew;
}
void print(struct node** link)
{
	struct node*last=*link;
	if(*link==NULL)
		cout<<"empty";
	
	while(last->next!=NULL)
	{
		cout<<last->data<<"->";
		last=last->next;
	}
	cout<<last->data;
}
int main()
{
	int ch,data,pos;
	struct node *link=NULL;
	cout<<"1.create 2.inafter 3.append 4.rem 5.search 6.print\n";
	do
	{
		cin>>ch;
		switch(ch)
			{
				case 1:
					cin>>data;
					create(&link,data);
					break;
				case 2:
					cin>>data>>pos;
					insert_after(&link,data,pos);
					break;
				case 3:
					cin>>data;
					append(&link,data);
					break;
				case 6:
					print(&link);
					break;
				case 4:
					cin>>pos;
					remove(&link,pos);
					break; 
				case 5:
					cin>>data;
					search(link, data)? cout<<"Yes" : cout<<"No";
			}
	}while(ch>0&&ch<=6);
	return 0;
}
