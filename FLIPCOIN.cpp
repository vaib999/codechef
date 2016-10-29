#include<iostream>
using namespace std;

main()
{
	long long n,c;
	cin>>n>>c;
	long long arr[100000]={0};
	
	while(c--)
	{
		int m;
		long long a,b;
		
		cin>>m>>a>>b;
		
		if(m==0)
		{
			int i=a;
			while(i<=b)
			{
				if(arr[i]==0)
				{
					arr[i]=1;
				}
				else
				{
					arr[i]=0;
				}
				i++;
			}
		}
		else if(m==1)
		{
			int i=a;
			int count=0;
			while(i<=b)
			{
				if(arr[i]==1)
				{
					count++;
				}
				i++;
			}
			cout<<count<<endl;
		}
	}
}
