//reverse an array
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    if(N>0&&N<=100)
    {
        int i,A[N];
        for(i=1;i<=N;i++)
        {
            cin>>A[i];
            if(A[i]>1000 || A[i]<0)
            {
            	return 0;
    		}
        }
        for(i=N;i>0;i--)
        {
            cout<<A[i]<<endl;
        }
    }
    
    return 0;
}
