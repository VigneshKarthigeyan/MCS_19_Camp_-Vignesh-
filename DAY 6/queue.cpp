//if D push and show the stack size
//if E pop
#include<iostream>
using namespace std;
#define n 100

void push(int arr[],int front,int &rear,int num,int &size)
{
	if(rear!=n)
	{
		arr[rear]=num;
		rear+=1;
		size+=1;
	}
}
int pop(int arr[],int &front,int rear,int &size)
{
	if(front!=rear)
	{
		int x=arr[front];
		arr[front]=0;
		front+=1;
		size-=1;
		return x;
	}	
	return -1;
} 
int main()
{
 	int arr[n],N,num,x,size=0;
	int front=0,rear=0;
	char ch;
	cin>>N;
	
	do
	{
		cin>>ch;
		N-=1;
		switch(ch)
		{
			case 'E':
				cin>>num;
				push(arr,front,rear,num,size);
				cout<<size<<endl;
				break;
			case 'D':
				x=pop(arr,front,rear,size);
				cout<<x<<" "<<size<<endl;
				break;
			default:
				cout<<"wrongly entered";
		}
	}while(N!=0);
		
	return 0;
}
