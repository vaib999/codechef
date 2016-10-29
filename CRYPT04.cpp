#include<iostream>
#include<math.h>
using namespace std;

main()
{
	int t,i,flag=0;
	while(t!=0)
	{
		cin>>t;
		flag=0;
		i=1;
		
		if(t==0)
			break;
			
		while(i<=t)
		{
			if(t==i)
			{
				flag=1;
				cout<<i<<endl;
				break;
			}
			i=i*2;
		}
		if(flag==0)
		{
			cout<<2*(t-i/2)<<endl;
		}
	}
}
