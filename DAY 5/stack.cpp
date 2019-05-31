//push into the stack
//pop the element if it is present in stack
//else return 0;
#include<bits/stdc++.h> 
using namespace std; 
#define MAX 1000 
class Stack 
{ 
	int top; 
public: 
	int a[MAX]; //Maximum size of Stack 

	Stack() { top = -1; } 
	void push(int x); 
	int pop();  
}; 
void Stack::push(int x) 
{ 
	if (top <1000)
	{ 
		a[++top] = x; 
	} 
	else
	return;
}
int Stack::pop() 
{ 
	if (top >0) 
	{ 
		int x = a[top--]; 
		return x; 
	} 
	else
	return -1;
} 
int main() 
{ 
	class Stack s; 
	int n;
	cin>>n;
	do{
		int ch,num;
		cin>>ch;
		n-=1;
		switch(ch)
		{
			case 1:cin>>num;
			s.push(num);
			break;
			case 2:int x=s.pop();
			cout<<x;
			break;
		}
	}while(n>0);

	return 0; 
} 

