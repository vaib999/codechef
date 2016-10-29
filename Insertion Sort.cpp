#include<iostream>
using namespace std;

main()
{
	int t,a[1000],i,j,value,hole;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>a[i];
	}
	
	for(i = 1;i<t;i++)
	{
		value = a[i];
		hole = i;
		
		while(hole>0 && a[hole-1]>value)
		{
			a[hole] = a[hole-1];
			hole = hole - 1;
		}
		a[hole] = value;
	}

	for(i=0;i<t;i++)
	{
		cout<<a[i]<<endl;
	}
	
}
