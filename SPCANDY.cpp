#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long int c,s;
		cin>>c>>s;
		
		if(s!=0)
		{
			cout<<c/s<<" "<<c%s<<endl;
		}
		else
		{
			cout<<"0"<<" "<<c<<endl;
		}
		
	}
}
