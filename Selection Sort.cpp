#include<iostream>
using namespace std;

main()
{
	int size,x,i,j,temp,a[1000],min;
	
	cin>>size>>x;
	
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}

	for(j=0;j<size;j++)
	{
		min = j;
	
		for(i=j+1;i<size;i++)
		{
			if(a[i]<a[min])
			{
				min = i;
			}
		}
		if(x--)
		{
			temp = a[min];
			a[min] = a[j];
			a[j] = temp;
		}
		else
		{
			break;
		}
		
	}
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
