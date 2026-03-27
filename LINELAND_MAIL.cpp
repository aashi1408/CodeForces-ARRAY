//LINELAND MAIL

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;//number of cities
	vector<int> v(n);
	for(int i=0 ; i<n ; i++)
	{
		cin>>v[i];
	}
	
	for(int i=0 ; i<n ; i++)
	{
		if(i == 0 )
		{
			cout<<abs(v[i] - v[i+1])<<" ";
			cout<<abs(v[i] - v[n - 1])<<endl;
		}
		else if(i == n - 1 )
		{
			cout<<abs(v[i] - v[i - 1])<<" ";
			cout<<abs(v[i] - v[0])<<endl;
		}
		else //when i= 2, 3 ,...n-2
		{
			cout<<min(abs(v[i] - v[i+1]) , abs(v[i] - v[i-1]))<<" ";
			cout<<max(abs(v[i] - v[0]), abs(v[i] - v[n - 1]))<<endl;
		}
	}
	return 0;
}
