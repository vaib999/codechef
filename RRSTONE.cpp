#include<iostream>
using namespace std;

main()
{
	long long n,k,i,max,a[100005];
	cin>>n>>k;
	
	max=-1000000000;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		
		if(a[i]>max)
			max=a[i];
	}
	
	if(k%2==1)
	{
		for(i=0;i<n;i++)
		{
			a[i]=max-a[i];
		}
	}
	else if(k!=0 && k%2==0)
	{
		for(i=0;i<n;i++)
		{
			a[i]=max-a[i];
		}
		
		for(i=0;i<n;i++)
		{
			if(a[i]>max)
				max=a[i];
		}
		
		for(i=0;i<n;i++)
		{
			a[i]=max-a[i];
		}
		
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
