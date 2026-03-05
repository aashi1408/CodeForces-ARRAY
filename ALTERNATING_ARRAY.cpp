//ALTERNATING ARRAY

#include<iostream>
using namespace std;

int main()
{
	int n;cin>>n;
	int odd_neg = 0 , odd_pos = 0 , even_neg = 0 , even_pos = 0;
	//odd indices which have negative and positive values
	//even indices which have negative and positive values
	int x;
	for(int i=0 ; i<n ; i++)
	{
		cin>>x;
		if(i % 2 == 0)
		{
			if(x > 0)//guaranteed that arr[i] != 0
				even_pos ++;
			else even_neg ++;
		}
		else
		{
			if(x > 0) odd_pos ++;
			else odd_neg ++;
		}
	}
	//it's a greedy approach
	int cnt1 = 0 , cnt2 = 0;
	//cnt1 min when odd_neg are more so we need few changes in odd_neg
	cnt1 += odd_pos;
	cnt1 += even_neg;
	//cnt2 min when even_neg are more
	cnt2 += even_pos;
	cnt2 += odd_neg;
	
	cout<<min(cnt1 , cnt2);//minimum operations to perform
	return 0;
}


























