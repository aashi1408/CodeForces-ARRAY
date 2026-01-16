//CHEAP TRAVEL

#include<iostream>
using namespace std;

int main()
{
	int n,m,a,b;
	//n is total rides
	//m -> ek baar me itni aari hai
	/*Input
The single line contains four space-separated integers 
n
, m, a, b (1 = n, m, a, b = 1000) — the number of rides 
Ann has planned, the number of rides covered by the 
m ride ticket, the price of a one ride ticket and
 the price of an m ride ticket.

Output
Print a single integer — the minimum sum in rubles 
that Ann will need to spend.*/
	cin>>n>>m>>a>>b;
	//GREEDY STRATEGY
	//1->simply  single rides so n*a
	//note that n is not single rides but totle rides
	int cost1 = n * a;
	//2-> ticket don't get waste
	int cost2 = (n/m) * b + (n%m) * a;
	//n/m is ki kitni m tickets aaskti hai
	//bina waste hue
	//aur n%m kitni rides ni cover hopai
	
	//3->ticket may get waste but money got saved
	int cost3 = ((n + m - 1)/m) * b;
	//ceil hAI
	int min_money = min(cost1 , min(cost2,cost3));
	
	cout<<min_money;	
}


























