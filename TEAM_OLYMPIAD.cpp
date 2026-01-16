//TEAM OLYMPIAD

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;//no. of children in the school
	cin>>n;
	vector<int>arr(n);
	
	for(int i=0 ; i<n ; i++)//take input array
	{
		cin>>arr[i];
	}
	int cnt1=0 , cnt2=0 , cnt3=0;
	vector<int>cnt1_idx;
	vector<int>cnt2_idx;
	vector<int>cnt3_idx;
	
	for(int i=0 ; i<n ;i++)//loop to find counts of 1,2,3
	//to find max 
	//and  thenn there indices
	{
		if(arr[i]==1)
		{
			cnt1++;
			cnt1_idx.push_back(i);
		}
		else if(arr[i]==2)
		{
			cnt2++;
			cnt2_idx.push_back(i);
		}
		else if(arr[i]==3)
		{
			cnt3++;
			cnt3_idx.push_back(i);
		}
	}
	int max_teams = min(cnt1, min(cnt2,cnt3));
	cout<<max_teams<<"\n";
	if(max_teams > 0)
	{
		for(int k=1; k<=max_teams ; k++)//0 se ni 1 se hi start hoga
		{
			cout<<cnt1_idx.back()+1<<" ";
			cnt1_idx.pop_back();
			cout<<cnt2_idx.back()+1<<" ";
			cnt2_idx.pop_back();
//			cout<<cnt3_idx.pop_back()+1<<"\n"; aisa ni
			cout<<cnt3_idx.back()+1<<"\n";
			cnt3_idx.pop_back();//
		}
	}
//	else
//		cout<<0;//no need now max_teams will do that
		
	return 0;
	
}
























