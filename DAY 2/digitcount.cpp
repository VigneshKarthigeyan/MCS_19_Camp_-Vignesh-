//no. of digit repetition in a number
#include <iostream>
using namespace std;

int main() {
	int num,x,count=0;
	int arr[10]={0,0,0,0,0,0,0,0,0,0};
	cin >> num;	
	while(num>10 && count<=100)
	{
	   x=num%10;
	   arr[x]+=1;
	   num/=10;
	   count++;
	}
	arr[num]+=1;
	for(int i=0;i<10;i++)
	{
		cout<<i<<" "<<arr[i]<<endl;
	}
	return 0;
}

