//SHIFT RIGHT

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N,X;
	cin>>N>>X;
	vector<int> arr(N);
	
	for(int i=0 ; i<N ; i++)
		cin>>arr[i];
	int swaps = X;
	bool swap = true;
	if(X >= N) swaps = X % N;
	
	if(swaps == 0) swap = false;

	else
	{
		vector<int> v(swaps);
	  	int k = 0;
		for(int i = N - swaps ; i< N ; i++)
		{
			v[k] = arr[i];
			k++;
		}
		int i = N - 1 , j = (N - swaps) - 1;
	
		while(j >= 0)
		{
			arr[i] = arr[j];
			i--,j--;
		}
		for(int i=0 ; i<swaps ; i++)
		{
			arr[i] = v[i];
		}
	}
	for(int i=0 ; i<N ; i++)
		cout<<arr[i]<<" ";
	return 0;
		
}





























