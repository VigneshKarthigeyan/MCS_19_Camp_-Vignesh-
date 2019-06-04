//count_if function
#include <bits/stdc++.h> 
using namespace std; 
bool iseven(int i) 
{ 
    if (i%2==0) 
        return true; 
    else
        return false; 
} 
int main() 
{ 
    int a[]={6,8,4,1,3};
    int even_one = count_if(a, a + 5, iseven); 
    cout << "Even's count is : " << even_one << endl;   
    return 0; 
} 
