//map
#include <iostream> 
#include <iterator> 
#include <map> 

using namespace std; 

int main() 
{ 
	int arr[10],A,B;
	for(int i=1;i<=5;i++)
	{
		cin>>arr[i];
	}
	map<int, int> maps; 
	for(int i=1;i<=5;i++)
	{
		cin>>A>>B;
		maps.insert(pair<int, int>(A,B));
	}
 
	map<int, int>::iterator itr; 
	cout << "\nThe map gquiz1 is : \n"; 
	cout << "\tKEY\tELEMENT\n"; 
	for (itr = maps.begin(); itr != maps.end(); ++itr) { 
		cout << '\t' << itr->first 
			<< '\t' << itr->second << '\n'; 
	} 
	cout << endl; 
	return 0; 
} 

