#include<iostream>
#include<string.h>
using namespace std;

main()
{
	long long t;
	cin>>t;
	
	while(t--)
	{
		string a;
		cin>>a;
		
		if((a[a.length()-1]-48)%2==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
