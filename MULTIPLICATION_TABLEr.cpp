//MULTIPLICATION TABLE

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,x;
	cin>>n>>x;
	
	int count = 0;
	
	for(int i=1 ;i<=n ; i++)
	{
		if(x % i == 0 && x/i <= n)
		{
			count++;
		}
	}
	cout<<count;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	int arr[n][n];
//	
//	int count = 0;//count of x
//	
//	for(int i=1 ; i<=n ; i++)
//	{
//		for(int j=1 ; j<=n ; j++)
//		{
//			arr[i-1][j-1] = i*j;
//		}
//	}
////	cout<<count_of_x;
//	sort(&arr[0][0] , &arr[0][0]+ n*n );
////	for(int i=0 ; i<n ; i++)
////	{
//		int start=0 , end=n-1 , mid;
//		while(start<=end)
//		{
//			mid = start + (end-start)/2;
//			if(arr[i][mid]==x)
//			{
//				count++;
//				break;
//			}
//			else if(arr[i][mid] > x)
//				end = mid - 1;
//			else
//			{
//				start = mid + 1;
//			}
//		}
////	}
//	cout<<count;
}
























