//ARRIVAL OF THE GENERAL

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;//no. of soldiers
	cin>>n;
	int mn = 101;
	int mx = 0;//2<=n<=100
	vector<int> a(n);
	
	int mx_idx = -1 , mn_idx = -1;
	
	for(int i=0 ; i<n ; i++)
	//loop to find mx to find mx_idx
	//,mn to find mn_idx
	{
		cin>>a[i];
		if(mn >= a[i])//agr ek se jyada freq hai min ki 10 10 to 10>10 false hojayega 
//		but hame right most 10 chiye hai
		{
			mn = a[i];
			mn_idx = i;	//KYA Ho
			//agr mn ek se jyada barr let's say do baar aajaye
//			aise me to idx badal jayega na
		}
		if(mx < a[i])//99<99 is false so it's a safe side
		{
			mx = a[i];
			mx_idx = i;
			//ab smajha ki agr max ai hai to ai<ai false hojayega
//			to idx ni badale na
		}
	}
	int total_time = 0;
	total_time = n - 1 - mn_idx;
	total_time += mx_idx;
	
	if(mx_idx > mn_idx)
		total_time-=1;
	//ans hoga tot_time yani mn aur mx time ka sum
	cout<<total_time;
	
}
//	for(int i=0 ; i<n ;i++)
//	{
//		if(a[i]==mx)
////		mx_idx.push_back(i);//
//		{
//		mx_idx = i;
//		break;
//		}//don't forgot braces
//	}//hm yahi cheez mn keliye isiliye ni krrye kyunki
	//wo to apne goal ke paas aara hai na
//	int tot_time = 0;//kitta samay laga
	//herapheri krne me
//	if( mx_idx!= 0)//kya jahan mx ko hona chiye wo wAHAN ni hai?//faltu cdns hai 0
//	{
//		tot_time+=mx_idx;
//		//sb peeche 1 shift hogaye
//		//afcourze mn bhi
//	}
//	int mn_time = 0;
//	if(mx_idx>mn_idx)//arey bhai//mn_time find krne se pehle hi
//	/*my mistake:
//	adjust min index thencount max swaps 
//	logic order broken*/
//			mn_idx += 1;
//	if( mn_idx!= n-1)		//faltu ki cdns
//	{
//		mn_time = n - 1 - mn_idx;//syntax bohot galat tha tumhara
//	}
//	total_time +=mx_idx;
	
//	if(mx_idx>mn_idx)//arey bhai
// JB TK Tu krri hai ye tb tk mn ne apna kaam krchuka hai
//	/*my mistake:
//	adjust min index thencount max swaps 
//	logic order broken*/
//			mn_idx += 1;
//	tot_time = n - 1 - mn_time;
//	//ans hoga tot_time yani mn aur mx time ka sum
//	cout<<tot_time;
//}
























