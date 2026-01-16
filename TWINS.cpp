//TWINS

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;//no. of coins
	cin>>n;
	vector<int> v(n);
	int tot_sum = 0;///////n
	for(int i=0 ; i<n ; i++)
	{
		cin>>v[i];
		tot_sum += v[i];
	}
	//now? sort in descending order 10 9 4 2 1
	
	sort(v.rbegin(),v.rend());
	
	int A_sum = 0 , A_coins = 0 ;
	
	for(int i=0 ; i<n ; i++)
	{
		A_sum += v[i];
		A_coins++;
		if(A_sum > (tot_sum - A_sum))
			break;
		
	}
	cout<<A_coins;
	
	return 0;
	
}
















