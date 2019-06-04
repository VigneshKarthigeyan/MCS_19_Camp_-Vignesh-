//vector 
#include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	vector<int> g1; 
	int arr[10];
	for (int i = 1; i <= 5; i++)
	{
		cin>>arr[i];
	}
	for (int i = 1; i <= 5; i++) 
		g1.push_back(arr[i]); 

	cout << "Size : " << g1.size(); 
	cout << "\nCapacity : " << g1.capacity(); 
	cout << "\nMax_Size : " << g1.max_size(); 
	 
	cout << "\nVector elements are: "; 
	for (auto it = g1.begin(); it != g1.end(); it++) 
		cout << *it << " "; 
	return 0; 
} 

