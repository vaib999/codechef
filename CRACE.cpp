#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	long long n;
	
	while(t--)
	{
		cin>>n;
		
		if(n%2==0)
		{
			cout<<"JACK"<<endl;
		}
		else
		{
			cout<<"JENNY"<<endl;
		}
	}
}
