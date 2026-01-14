//VALERA AND SHOES

#include<iostream>
using namespace std;

int main()
{
	int arr[4];//4 shoes Valera has right now
	for(int i=0 ; i<4 ; i++)
	{
		cin>>arr[i];
	}
	
	int distinct = 0;
	
	for(int i=0 ; i<4 ; i++)
	{
		bool isNew = true;//let the shoe is new
		for(int j=0 ; j<i ; j++)
		{
			if(arr[i] == arr[j])
			{
				isNew = false;//areh wo to duplicate nikla
				break;
			}
		}
		if(isNew)
			distinct++;
	}
	cout<< 4 - distinct;//distinct km se km ek to hoga so ans
	//lie karega [0,3] inclusive range
	return 0;
}
























//int main()
//{
//	int a[4];//4 shoes valera have right now
//	for(int i=0 ; i<4 ; i++)//-->O(1)
//	{
//		cin>>a[i];
//	}
//	
//	int max_freq = 0;
//	
//	for(int i=0 ; i<4 ; i++)
//	{
//		int cnt = 0;
//		for(int j=0 ; j<4 ; j++)
//		{
//			if(a[i]==a[j])//ek barr to tb hi hojayega i=j pe
//				cnt++;
//		}
//		max_freq = max(max_freq,cnt);
//	}
//	
//	cout<<max_freq - 1;//sb ko thodi badloge 1 to rehne doge freq>1 wale shoes me 
//	
//	return 0;
//}

















//int main()	//THis logic is not so good as 8bytes* 10^9 bohot jyada hai
//{
//	int brr[4];//four shoes which valera have right now
//	int mx = INT_MIN;
//	
//	for(int h=0 ; h<4 ; h++)//loop to input and find max both , saath hi saath me
//	{
//		cin>>brr[h];
//		if(mx < brr[h])
//		{
//			mx = brr[h];
//		}
//	}
//	long freq[mx+1] = {0};//freq array to track how many shoes are same or different
//	
//	for(int h=0 ; h<4 ; h++)
//	{
//		freq[brr[h]]++;// 0-->1-->2
//	}
//	int high_freq = 0;//ans is highest freq - 1
//	//mtlb 8 8 8 8 high_freq = 4 hai to hame 3 hi to remove krne hai
//	//int case of high_freq = 1 then 1 - 1 = 0 means hme fir kisi ko change ni krna
//	for(int h=0 ; h<4 ; h++)
//	{
//		if(freq[brr[h]] > high_freq)
//		{
//			high_freq = freq[brr[h]];
//		}
//	}
//	//agar 7 7 7 3 hai to 3 ko ni 2 ko hi change krna hai
//	//agr 8 8 8 8 saare ek jaise hai to 3 ko hi change krna hai
////	int req_shoe_change = 4 - ok_shoes;
//	int req_shoe_change = high_freq - 1;//sb ko thodi badloge 1 to rehne doge freq>1 wale shoes me se
//	
//	cout<<req_shoe_change;
//	
//	return 0;
//}
