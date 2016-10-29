#include<iostream>
using namespace std;

main()
{
	long long int n,i,a[100000]={0},sum_first=0,sum_second=0;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum_first=sum_first+a[i];
	}
	
	for(i=1;i<=n;i++)
	{
		sum_second=sum_second+i;
	}
	
	if(sum_first==sum_second)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
