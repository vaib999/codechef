#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long int n, a[100001];
		
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<(n*(n-1)/2)<<endl;
	}
}
