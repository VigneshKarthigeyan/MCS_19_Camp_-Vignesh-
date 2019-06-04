#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 
void print(list <int> g) 
{ 
	list <int> :: iterator it; 
	for(it = g.begin(); it != g.end(); ++it) 
		cout << '\t' << *it; 
	cout << '\n'; 
} 

int main() 
{ 
	int arr1[10],arr2[10];
	list <int> list1, list2; 
	for (int i = 1; i <= 5; i++)
	{
		cin>>arr1[i];
	}
	for (int i = 1; i <= 5; i++)
	{
		cin>>arr2[i];
	}
	for (int i = 1; i <= 5; ++i) 
	{ 
		list1.push_back(arr1[i]); 
		list2.push_front(arr2[i]); 
	} 
	cout << "\ngqlist1.reverse() : "; 
	list1.reverse(); 
	print(list1); 

	cout << "\ngqlist2.sort(): "; 
	list2.sort(); 
	print(list2); 

	return 0; 

} 

