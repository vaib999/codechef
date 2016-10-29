#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long int likes,days,start,constant;
		
		cin>>likes>>days>>start>>constant;
		
		days--;
		
		while(start<likes&&days--)
		{
			start=start+(start*constant);
		}
		if(start>=likes)
			cout<<"ALIVE AND KICKING"<<endl;
		else
			cout<<"DEAD AND ROTTING"<<endl;
	}
}
