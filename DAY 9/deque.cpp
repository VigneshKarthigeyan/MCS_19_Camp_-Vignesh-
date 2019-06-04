//deque
#include <iostream> 
#include <deque> 
using namespace std; 
void print(deque <int> g) 
{ 
	deque <int> :: iterator it; 
	for (it = g.begin(); it != g.end(); ++it) 
		cout << '\t' << *it; 
	cout << '\n'; 
} 
int main() 
{ 
	deque <int> deq; 
	int arr[10];
	for (int i = 1; i <= 5; i++)
	{
		cin>>arr[i];
	}
	for (int i = 1; i <= 5; ++i) 
	{ 
		deq.push_back(arr[i]); 
	}  
	cout << "The deque is : "; 
	print(deq); 

	cout << "\ngquiz.size() : " << deq.size(); 
	cout << "\ngquiz.max_size() : " << deq.max_size(); 
	return 0; 
} 

