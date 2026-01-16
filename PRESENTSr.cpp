//PRESENTS

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;//no. of friends
	cin>>n;
	vector<int>arr(n+1,0);
	for(int i=1 ; i<=n ; i++)//loop to input ele
	{
		cin>>arr[i];
	}
	vector<int>ans(n+1,0);//
	
	for(int j=1 ; j<=n ; j++)//loop to do the matching
	{
		ans[arr[j]] = j;
	}	
	
	for(int i=1 ; i<=n ; i++)//loop to print matching
	{
		cout<<ans[i]<<" ";
	}
	return 0;
}
