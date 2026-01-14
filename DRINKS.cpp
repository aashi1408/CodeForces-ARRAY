//DRINKS

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double n;//number of drinks
	cin>>n;
	double sum = 0 ;
	double x;
	for(int i=1 ; i<=n ; i++)//inputs p1,p2,p3...,pn 
	//i.e.,percent of orange juice in n number of drinks
	
	//wo kr kaise skta hai ye orange juice separate 
	//agar sabji roti me hui toh
	//fir kaise alag karega
	
	//simple sa hame mean nikalna hai
	{
		cin>>x;
		sum+=x;
	}
	
	cout<<setprecision(12)<<sum/n;
	return 0;
}
