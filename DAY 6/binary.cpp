//print the position of the sorted array
//using binary search
#include<iostream>
#include<math.h>
using namespace std;
void sort ( double A[ ] , int n) 
{
     for( int i = 0 ;i < n ; i++ ) {
      int temp = A[ i ];    
      int j = i;
          while(  j > 0  && temp < A[ j -1]) {
                A[ j ] = A[ j-1];   
                j= j - 1;
           }
           A[ j ] = temp;       
     }  
}
int binsearch(double arr[],int *n,int x)
{
	int low=0,high=(*n)-1;
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]<x)
		{
			low=mid+1;
		}
		if(arr[mid]>x)
		{
			high=mid-1;
		}
		if(arr[mid]==x)
		{
			return mid+1;
		}
	}
	return 0;
}
int main()
{
	int n,q,i,y,j=0,find,query;
	query=int(pow(10,5));
	double a[query];
	
	cin>>n;
	int x[n];
	if(n<=pow(10,5))
	{
		for(i=0;i<n;i++)
		{
		cin>>a[i];
			if(a[i]>pow(10,9))
			{
				break;
			}
		}
		sort(a,n);
	cin>>q;
	if(q<=pow(10,5))
	{
		for(i=0;i<q;i++)
		{
			cin>>x[i];
			if(x[i]>pow(10,9))
			{
				break;
			}
		}	
		for(i=0;i<q;i++)
		{
			y=binsearch(a,&n,x[i]);
			cout<<y<<endl;
		}
	}
	}
	
	return 0;
}
