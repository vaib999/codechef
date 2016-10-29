#include<iostream>
#include<math.h>
using namespace std;

main()
{
	int t,b,ls;
	float min,max;
	cin>>t;
	
	while(t--)
	{
		cin>>b;
		cin>>ls;
		
		if(b>ls)
		{
			min=b*b-ls*ls;
			min=sqrt(min);
			cout<<min;
		}
		else
		{
			min=ls*ls-b*b;
			min=sqrt(min);
			cout<<min;
			cout<<" ";
		}
		
		max=ls*ls+b*b;
		max=sqrt(max);
		cout<<max;
		cout<<"\n";
	}
}
