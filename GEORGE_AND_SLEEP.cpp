//GEORGE AND SLEEP

#include<iostream>
using namespace std;

int main()
{
	/*goal is to find 
	p -> when george slept given that we know s -> current time and t -> the amount of time he slept 
	in format hh:mm
	so eqn is p = s - t
	s -> current time or wake up time
	t -> he slept for or sleep time so 
	p -> bed time
	*/
	int a,b,c,d;
	char ch1,ch2;
	cin>>a>>ch1>>b;
	cin>>c>>ch1>>d;
	
	int sleep_time_mins = c * 60 + d;
	int wake_time_mins = a * 60 + b;
	int bed_time_mins = wake_time_mins - sleep_time_mins;
	
	if(bed_time_mins<0) bed_time_mins+=1440;//he slept yesterday not today
	
	int hrs = bed_time_mins / 60;
	int mins = bed_time_mins % 60;
	
	if(hrs<10) cout<<"0";//adjusting to the format 00 if hrs < 10 means 
	//09 instead of 9
	cout<<hrs<<":";
	if(mins<10)cout<<"0";//adjusting to the format 00 if mins < 10 means 
	//07 instead of 7
	cout<<mins;
	
	return 0;
}
