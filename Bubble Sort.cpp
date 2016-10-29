#include<iostream>
using namespace std;

main()
{
	int size,a[1000],i,j,temp,count = 0;
	
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	for(j=size-1;j>=1;j--)
	{
		for(i=0;i<j;i++)
		{
			if(a[i]>a[i+1])
			{
				count++;
				
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	cout<<count<<endl;
}
