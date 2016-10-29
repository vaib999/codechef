#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	int dividend;
	int divisor;
	int remainder;
	
	if(a>b)
	{
		dividend=a;
		divisor=b;
	}
	else
	{
		dividend=b;
		divisor=a;
	}
	
	while(divisor!=0)
	{
		remainder=dividend%divisor;
		
		dividend=divisor;
		divisor=remainder;
	}
	return dividend;
}

main()
{
	int a[50];
	int t;
	int i;
	int num;
	int hcf;
	int ing;
	int j;
	
	cin>>t;
	
	while(t--)
	{
		cin>>num;
		
		for(i=0;i<=num;i++)
		{
			a[i]=0;
		}
		
		i=0;
		while(num--)
		{
			cin>>ing;
			a[i]=ing;
			i++;
		}
		
		j=0;
		hcf=a[j];
		while(a[j+1]!=0)
		{
			hcf=gcd(hcf,a[j+1]);
			j++;
		}
		
		i=0;
		while(a[i]!=0)
		{
			cout<<a[i]/hcf;
			cout<<" ";
			i++;
		}
	}
}
