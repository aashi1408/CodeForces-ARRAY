//FOOTBALL

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<string>s(n);//team which won?
//	string team1 = s[0];//INPUT LIYA NI AUR ASSIGN KRDIA?
//	string team2 = "";
	string team1,team2;
	
	int team1_cnt = 0 , team2_cnt = 0;
	
	for(int i=0 ; i<n ; i++)
	{
		cin>>s[i];//input winning teams
		team1=s[0];
//		if(s[i]!=team1)
//			team2 = s[i];
			
		if(s[i] == team1)
			team1_cnt++;
			
		else
		{
			team2 = s[i];//
			team2_cnt++;
		}
	}
	
	//It's guaranteed that tie ni hua hai
	if(team1_cnt > team2_cnt)
		cout<<team1;
	else 
		cout<<team2;

}
