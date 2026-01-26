//INTERESTING DRINK-->"Beecola"

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	int n;//no. of shops
	cin>>n;
	vector<int> v(n);
	
	for(int i=0 ; i<n  ; i++)
	{
		cin>>v[i];//prices of bottles of drink in the ith shop
	}
	
	sort(v.begin() ,v.end());//to apply binary search
	
	int q;//no of days vasiliy plans to buy the drink
	cin>>q;
	int x;//var to input no. of coins vasiliy can spent on the ith day
	
	for(int i=1 ; i<=q ; i++)
	{
		cin>>x;
		int start = 0 , end = n-1 , ans = -1 , mid;
		// 3 10 8 6 11
		while(start<=end)
		{
			mid = start + (end - start)/2;
		 	if(v[mid] > x)//is case me ans kabhi touch ni hoga
				end = mid - 1;
				
			else if(v[mid] <= x)//simple si to cdn thi
			//aur tumne curly braces ni lagaye the
			{
				ans = mid;
				start = mid + 1;
			}
		}
		cout<<ans+1<<"\n";
			/*initialize ans with -1 so as in the case if ans is 0 
			or not zero 
			if we +1 ans then -1+1 becomes 0 in case of the first index i.e., 0
			we +1 that's also fine*/
	}
	
	return 0;
	
	
}






























