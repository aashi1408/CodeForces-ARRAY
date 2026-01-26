//WORMS

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;//no. of piles
	cin>>n;
	vector<int>v(n);
	
	for(int i=0 ; i<n ; i++)
	{
		cin>>v[i];//no. of worms on the ith pile
	}
	
	for(int j=1 ; j<n ; j++)//array apne aap sort hogya hai
	{
		v[j] = v[j] + v[j-1] ; 
	}
	int m;//no. of juicy worms said by marmot
	cin>>m;
	int qi;//the labels of the juicy worms
	
	for(int i=1; i<= m ; i++)
	{
		cin>>qi;
		int ans;
		int start=0 , end = n-1  ,mid;
		
		while(start<=end)
		{
			mid = start + (end-start)/2;//mid ko badalna
			//bhulgyi thi
			if(qi <= v[mid])
			{
				ans = mid+1;
				end = mid-1;
				//as 0 based hai
				//but ans 1 based chaiye
			}
			else
			{
				start = mid + 1;
			}
		}
		cout<<ans<<"\n";
	}
}


















