//FRONT - END

#include<iostream>
using namespace std;

int main()
{
	//here we need to store the array
	int n;cin>>n;
	int a[100000];
	for(int i=0 ; i<n ; i++)
	{
		cin>>a[i];
	}
	//using two pointers
	int start = 0 , end = n - 1;
	int mid = end / 2;
	while(start <= end)
	{
		if( start == mid and n % 2 != 0)//odd number of elements
		{
			cout<<a[start];
			break;
		}//hamara kaam hogaya
		cout<<a[ start ++ ]<<" ";
		cout<<a[ end -- ]<<" ";
	}
	return 0;
}
