//WORD

#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int upper_cnt = 0 , lower_cnt = 0;
	
	for(int i= 0; i<s.length() ; i++)
	{
		if(s[i]>='A' && s[i]<='Z')
			upper_cnt++;
		else 
			lower_cnt++;
	}
	if(lower_cnt>= upper_cnt)
	{
		for(int i=0 ; i<s.length() ; i++)
		{
			if(s[i]>='A' && s[i]<='Z')
				s[i]+= 32;
		}
	}
	else
	{
		for(int i=0 ; i<s.length() ; i++)
		{
			if(s[i]>='a' && s[i]<='z')
				s[i]-= 32;
		}	
	}	
	cout<<s;
	
	return 0;
}









