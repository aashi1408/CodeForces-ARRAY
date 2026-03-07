//EVEN_HATE_ODD

#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//no need to store the array
		int n;
		cin>>n;
		int odd_cnt = 0 , even_cnt = 0;
		int x;
		for(int i = 0 ; i < n ; i++ )
		{
			cin>>x;
			if( x % 2 == 0) even_cnt ++ ;
			else odd_cnt ++ ;
		}
		if( n % 2 != 0) //one thing we didn't did was if n is odd
		//didn't took the input now let's see what will happen
		{
			cout<<-1<<endl;//it is impossible to make the number of even count
			//equal to odd count
			continue;
		}
		//else
//		int op = 0 ;// operations //fresh variable use karo
//		int half = n / 2;
//		if(half > odd_cnt) op += half - odd_cnt;
//		if(half > even_cnt) op += half - even_cnt;

		/*Because:
		odd_cnt + even_cnt = n
		half = n/2
		Both conditions cannot be true at the same time*/
		int mx = max(odd_cnt , even_cnt);
		cout<< mx - n / 2 <<endl;
	}
	return 0;
}
