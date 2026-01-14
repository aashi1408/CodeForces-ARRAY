//VANYA AND FENCE

#include<iostream>
using namespace std;
//traversal problem
//to find he minimum possible valid width of the road.

int main()
{
	int n,h;//n is the number of elements
	//h is the height of wall
	//if h crossed person will bend so +2
	//if less than than +1
	cin>>n>>h;
	int x;
	
	int sum = 0;
	for(int i=0 ; i<n ; i++)
	{
		cin>>x;
		if(x<=h) sum+=1;
		else sum+=2;//h crossed
	}
	cout<<sum;//minimum possible valid width of the road
	return 0;
}
