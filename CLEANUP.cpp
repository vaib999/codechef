#include<iostream>
using namespace std;

main()
{
	int t,jobs[1001];
	
	cin>>t;
	
	while(t--)
	{
		int total,i,j,completed;
		
		cin>>total;
		i=1;
		while(i<=total)
		{
			jobs[i]=0;
			i++;
		}
		
		cin>>completed;
		i=1;
		while(i<=completed)
		{
			
			cin>>j;
			jobs[j]=1;
			i++;
		}
		
		i=1,j=1;
		while(i<=total)
		{
			if(jobs[i]==0)
			{
				
				if(j%2==1)
				{
					cout<<i<<" ";
					jobs[i]=1;
					j++;
				}
				else
				{
					j++;
				}
			}
			i++;
		}
		cout<<endl;
		
		i=1;
		while(i<=total)
		{
			if(jobs[i]==0)
			{
				cout<<i<<" ";
			}
			i++;
		}
		cout<<endl;
	}
}
