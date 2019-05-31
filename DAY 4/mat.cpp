#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(n>0&&n<=10&&n>0&&n<=10)
	{
		int mat[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>mat[i][j];	
			}
		}
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<mat[j][i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
