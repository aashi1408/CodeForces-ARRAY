//NEXT_ROUND

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//n is the number of players and k is some index (cut off bolskte hai)
	//0 is not positive jo players k pos means a[k-1] jitna ya usse jyada accha perform karega
	//wo advance hojayega next round keliye
	int n,k;
	cin>>n>>k;
	
	vector<int> a(n);
	for(int j=0 ; j<n ; j++)
	{
		cin>>a[j];
	}
	int count = 0;
	int threshold = a[k-1];//0 based indexing hai!
	
	for(int i=0 ; i<n ; i++)//traversal pattern
	{
		if(a[i]>=threshold and a[i]>0)
			count++;
	}
	cout<<count;;;
	
	return 0;
}
