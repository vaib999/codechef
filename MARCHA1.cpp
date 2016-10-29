#include<iostream>
using namespace std;

int power(int i)
{
	int j,n=1;
	for(j=0;j<i;j++)
	{
		n=n*2;
	}
	return n;
}
void decimal_binary(int num,int a[],int size)  /* Function to convert decimal to binary.*/
{
	int i;
	for(i=0;i<size;i++)
	{
		a[i]=num%2;
		num=num/2;
	}
}

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int coins,demand;
		cin>>coins>>demand;
		
		int a[coins],b[coins];
		
		int i=0,flag=0;
		while(i<coins)
		{
			cin>>b[i];
			i++;
		}
		
		i=0;
		while(i<power(coins))
		{
			decimal_binary(i,a,coins);
			
			int j=0,sum=0;
			while(j<coins)
			{
				if(a[j]==1)
				{
					sum=sum+b[j];
				}
				j++;
			}
			if(sum==demand)
			{
				flag=1;
				break;
			}
			i++;
		}
		
		if(flag)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
}

