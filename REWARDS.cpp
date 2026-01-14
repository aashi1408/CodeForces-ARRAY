//REWARDS

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a1,a2,a3;//(first,second,third) prize cups
	int b1,b2,b3;//(first,second,third) prize medals
	//who won ? BIZON bhaiya 
	int n;//number of shelves we have
	cin>>a1>>a2>>a3;
	cin>>b1>>b2>>b3;
	cin>>n;
	/*Naturally, the rewards in the cupboard must look good, that's why Bizon the Champion decided to follow the rules:

any shelf cannot contain both cups and medals at the same time;
no shelf can contain more than five cups;
no shelf can have more than ten medals.
Help Bizon the Champion find out if we can put all the rewards so that all the conditions are fulfilled.*/
	
	int total_cup = a1 + a2 + a3;
	int total_medal = b1 + b2 + b3;
	
	int req_shel_for_cup = ceil(total_cup/5.0);//
	int req_shel_for_medal = ceil(total_medal/10.0);//
	
	int total_req_shel = req_shel_for_cup + req_shel_for_medal;
	
	if(total_req_shel<= n) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
