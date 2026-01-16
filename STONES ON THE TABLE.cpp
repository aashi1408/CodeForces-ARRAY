//STONES ON THE TABLE

#include<iostream>
using namespace std;
//wo arrange krne ko ni
//remove krne ko bol ra hai

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	
	int remove_cnt = 0;
	for(int i=1 ; i<n ; i++)
	{
		if(s[i] == s[i-1])
			remove_cnt++;
	}
	cout<<remove_cnt;
	
	return 0;
}
