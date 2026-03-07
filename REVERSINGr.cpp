//REVERSING

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0 ; i<n ; i++)
		cin>>v[i];
		
	for(int i=0 ; i<n ; i++)
	{
		if(v[i] == 0)
		{
			vector<int> a(i);//0 se pehle kitne ele? uske num = index ele
			int j  = i - 1;
			for(int k = 0 ; k < i ; k++)
			{
				a[k] = v[j];
				j--;
			}
			for(int k = 0 ; k < i ; k++)
			{
				v[k] = a[k];
			}
		}
	}
	for(int y=0 ; y<n ; y++)
	{
		cout<<v[y]<<" ";
	}
	return 0;
}
