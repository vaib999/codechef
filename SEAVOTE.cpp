#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long int n,i,sum_min;
		cin>>n;
		int size=n;
		
		long a[10000]={0};
		
		long sum_max=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==0)
				size--;
				
			sum_max+=a[i];
		}
		
		if(sum_max>=100)
		{
			sum_min=sum_max-size;
			if(sum_min<100)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
}
