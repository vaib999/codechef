#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,num,k,a[100]={0},i;
		cin>>n>>k;
		
		for(i=0;i<n;i++)
		{
			cin>>num;
			a[num%(k+1)]++;
		}
		
		int flag=0;
		for(i=0;i<=k;i++)
		{
			if(a[i]>=n-1)
			{
				flag=1;
				break;
			}
		}
		
		if(flag==1)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
}
