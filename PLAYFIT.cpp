#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int a[100005];
		int n,i;
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int diff=-1;
		int min=1000000;
		for(i=0;i<n-1;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
			}
			if(a[i+1]-min>diff)
			{
				diff=a[i+1]-min;
			}
		}
		if(diff<=0)
			cout<<"UNFIT"<<endl;
		else
			cout<<diff<<endl;
	}
}
