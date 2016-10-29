#include<iostream>
using namespace std;

main()
{
	long int n,x,y,i;
	cin>>n>>x>>y;
	
	long long max_profit=0;
	
	long int a[100005],b[100005];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]>b[i] && x)
		{
			max_profit+=a[i];
			x--;
		}
		else
		{
			max_profit+=b[i];
			y--;
		}
	}
	cout<<max_profit<<endl;
}
