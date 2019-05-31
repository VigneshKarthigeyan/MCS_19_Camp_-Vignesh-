// nth ugly number
# include<bits/stdc++.h> 
using namespace std; 
unsigned getNthUglyNo(unsigned n) 
{ 
	unsigned ugly[n]; 
	unsigned i2 = 0, i3 = 0, i5 = 0; 
	unsigned n2 = 2; 
	unsigned n3 = 3; 
	unsigned n5 = 5; 
	unsigned next_ugly_no = 1; 

	ugly[0] = 1; 
	for (int i=1; i<n; i++) 
	{ 
	next_ugly_no = min(n2,min(n3,n5)); 
	ugly[i] = next_ugly_no; 
	if (next_ugly_no == n2) 
	{ 
		i2 = i2+1; 
		n2 = ugly[i2]*2; 
	} 
	if (next_ugly_no == n3) 
	{ 
		i3 = i3+1; 
		n3 = ugly[i3]*3; 
	} 
	if (next_ugly_no == n5) 
	{ 
		i5 = i5+1; 
		n5 = ugly[i5]*5; 
	} 
	} 
	return next_ugly_no; 
} 
int main() 
{ 
	int n ;
	cin>>n; 
	cout << getNthUglyNo(n); 
	return 0; 
} 

