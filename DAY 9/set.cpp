//set
#include <iostream> 
#include <set> 
#include <iterator> 

using namespace std; 

int main() 
{ 
	int rem,arr[10];
	set <int, greater <int> > sets;
	set <int, greater <int> > :: iterator itr;
	for(int i=1;i<=5;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<=5;i++)
	{
		sets.insert(arr[i]);
	}
	cout<<"The set is \n" ;
	for (itr = sets.begin(); itr != sets.end(); ++itr) 
	{ 
		cout << *itr<<" "; 
	} 
	cout << endl; 
	return 0; 
} 

