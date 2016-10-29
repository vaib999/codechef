#include<iostream>
#include<math.h>
using namespace std;

long long b[1000001]={0};

void prime_factor(long long num)
{
	int i=2;
	while(i<=sqrt(num))
	{
		if(num%i==0)
		{
			num=num/i;
			b[i]++;
			i=2;
		}
		else
		{
			i++;
		}
		
	}
	b[num]++;
}

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long n,i;
		cin>>n;
		
		long long a[n];
		for(i=0;i<1000001;i++)
			b[i]=0;
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			prime_factor(a[i]);
		}
		b[0]=0;
		
		long long pro=1;
		for(i=1;i<1000001;i++)
		{
			pro=pro*(b[i]+1);
		}
		
		cout<<pro<<endl;	
	}
}
