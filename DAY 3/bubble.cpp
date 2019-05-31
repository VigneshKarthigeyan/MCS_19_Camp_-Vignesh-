//count the swaps in bubble sort
#include<iostream>
using namespace std;
int sort( int A[ ], int n ) {
    int temp,i,j,count=0;
    for(j = 0; j< n-1; j++) {
	 for(i = 0; i < n-1; i++) {
            if(A[ i ] > A[ i+1] ) {
            	count+=1;
                temp = A[ i ];
                A[ i ] = A[ i+1 ];
                A[ i + 1] = temp;
            }
        }
    }
    return count;
}
int main()
{
	int n;
	cin>>n;
	if(n>0 && n<=100)
	{
		int A[n],ans;
		for(int i=0;i<n;i++)
		{
			cin>>A[i];
		}
		ans=sort(A,n);
		cout<<ans;
	}
	return 0;
}
