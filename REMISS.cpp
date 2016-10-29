#include<iostream>
using namespace std;

main()
{
	long t;
	cin>>t;
	
	while(t--)
	{
		int g1,g2;
		cin>>g1;
		cin>>g2;
		
		if(g1>g2)
		{
			cout<<g1;
		}
		else
		{
			cout<<g2;
		}
		
		cout<<" "<<g1+g2<<endl;
	}
}
