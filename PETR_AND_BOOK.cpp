//PETR AND BOOK

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[8] = {0} ; 
	
	for(int i=1 ; i<=7  ; i++)
	{
		cin>>arr[i];
	}
	int i = 1 ;
	int r = n;//remaining
	while(r>0)
	{
		r -= arr[i];
		if(i==7) i = 1;
		else i++;
	}
	
	if(i == 1) cout<<7;
	else cout<<i - 1;
	
	return 0;
}
