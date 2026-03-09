//DISTINCT NUMBERS

#include<iostream>
using namespace std;

int main()
{
	int N;cin>>N;
	int freq[2001]= {0} ;
	//from 0 t0 1000 freq of 0 and +ve numbers
	//then from 1001 to 2000 freq of -ve numbers as contraints are:
	//Second line will contain N numbers (-10^3=Ai=10^3)
	//no need to store the actual array
	//but need to store the freq
	int x;
	for(int k=0 ; k<N ; k++)
	{
		cin>>x;
		if(x >= 0) freq[x] ++;
		else//handle freq of negative values
		{
			freq[abs(x) + 1000] ++;
		}
	}
	int cnt = 0;
	for(int i=0 ; i<=2000 ; i++)
	{
		if(freq[i] != 0) cnt ++;
	}
	cout<<cnt;
	
	return 0;
}
