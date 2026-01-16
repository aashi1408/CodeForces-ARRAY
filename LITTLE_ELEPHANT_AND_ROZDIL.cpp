//LITTLE ELEPHANT AND ROZDIL

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//1 based indexing hai
	int n;
	cin>>n;
	vector<int>v(n);
	
	int mn = INT_MAX;
	int mn_idx = -1;
	
	for(int i=0 ; i<n ; i++)//loop to input and 
	//to find mn and mn index
	{
		cin>>v[i];
		if(mn > v[i])
		{
			mn = v[i];
			mn_idx = i;
		}
	}
	int mn_freq = 0;//km se km ek baar toh hoga
	for(int i=0 ; i<n ;i++)
	{
		if(v[i] == mn)
		{
			mn_freq++;
		}
	}
	if(mn_freq == 1)
		cout<<mn_idx + 1;//1 based indexing
	else
		cout<<"Still Rozdil";
		
	return 0;
}














