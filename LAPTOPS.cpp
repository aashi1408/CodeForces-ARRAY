//LAPTOPS

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>> v(n);
	for(int i=0  ; i<n ; i++)
	{
		cin>>v[i].first;//price
		cin>>v[i].second;//quality
	}
	sort(v.begin(),v.end()) ;//sort by price
	
	for(int i=0 ; i<=n-2; i++)
	{
		if(v[i].second > v[i+1].second)//comparing quality as 
		//price already sorted and are distinct
		{
			cout<<"Happy Alex";
			return 0;
		}
	}
	cout<<"Poor Alex";
	return 0;
	
}
//	BRUTE FORCE :
//	int n;cin>>n;
////	bool first = false , second = false ; 
//	//initially cdns of first lapi and second are false
//	//no need to store array
//	int a , b;
//	vector<int> price(n);
//	vector<int> quality(n);
//	for(int i=0 ; i<n ; i++)
//	{
//		cin>>price[i];
//		cin>>quality[i];
//	}
//	int condition = false;
//	for(int k=0 ; k<=n-2 ; k++)
//	{
//		int i=k , j=n-1;
//		while(i<j)
//		{
//			if(price[i] < price[j])
//			{
//				if(quality[i] > quality[j]) condition = true;
//			}
//			else if(price[j] < price[i])
//			{
//				if(quality[j] > quality[i]) condition = true;
//			}
//			j --;//i apni jagah me hi hai
//		}
//	}
//	if(condition) cout<<"Happy Alex";
//	else cout<<"Poor Alex";
	















