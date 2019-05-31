//count the prime numbers
#include<bits/stdc++.h>
using namespace std;
int list_prime(int n)
{
	int count=0;
    bool arr[n+1];
    memset(arr,true,sizeof(arr));
    for(int i=2;i*i<=n;i++)
    {
        if(arr[i]==true)
        {
           for(int j=i*i;j<=n;j+=i)
            {
                arr[j]=false;
            } 
        }
    }
    for(int l=2;l<=n;l++)
    {
        if(arr[l])
        {
            count+=1;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    if(n!=0 && n<=1000000)
    {
        int count=list_prime(n);
        cout<<count;
    }
    return 0;
}
