//Print the last occurence of number in a array
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,N,M;
    int x=(int)pow(10,5);
    double A[x];
    cin>>N;
	cin>>M;
    if(N<pow(10,5) && M<pow(10,9))
	    for(i=0;i<N;i++)
	    {
	        cin>>A[i];
	        if(A[i]>pow(10,9))
	        	break;
	    }
	    for(i=N-1;i>=0;i--)
	    {
	        if(A[i]==M)
	        {
	        	cout<<i+1;
	        	break;
	        }
	    }
    return 0;
}

