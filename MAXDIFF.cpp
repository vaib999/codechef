#include<iostream>
#include<algorithm>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n,k,sum1,sum2;
		long long int a[100];
		cin>>n>>k;
		
		sum1=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum1+=a[i];
		}
		
		sort(a,a+n);
		
		sum2=0;
		
		for(int i=0;i<k;i++)
		{
			sum2+=a[i];
		}
		sum1=sum1-sum2;

		if((sum1-sum2)<0)
			cout<<-1*(sum1-sum2)<<endl;
		else
			cout<<sum1-sum2<<endl;
	}
}
