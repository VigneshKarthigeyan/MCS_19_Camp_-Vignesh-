//show the positions after an array sorted
#include<iostream>
using namespace std;
void sort ( int A[ ] , int n) 
{
	int B[n];
	for(int i=0;i<n;i++)
	{
		B[i]=A[i];
	}
	
     for( int i = 0 ;i < n ; i++ ) {
		int temp = A[ i ];    
      	int j = i;
		 while(  j > 0  && temp < A[ j -1]) 
	  		{
                A[ j ] = A[ j-1];   
                j= j - 1;
			}
           A[ j ] = temp;       
     } 
	  cout<<endl;
     for( int i = 0 ;i < n ; i++ )
     {
     	int temp=B[i];
     	for(int j=0;j<n;j++)
     	{
     		if(A[j]==temp)
     		{
     			cout<<j+1<<" ";
			 }
		 }
	 }
     
}
int main()
{
	int n;
	cin>>n;
	if(n>0&&n<=100)
	{
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]>100 || a[i]<1)
			{
				break;
			}
		}
		sort(a,n);
		
	}
	return 0;
}
