#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		unsigned long long int i,n,k,ans;
		
		cin>>n>>k;
		
		n--,k--;
		
		if(k>n/2)
			k = n-k;
		
		ans = 1;
		
		for(i = 1;i <= k;i++)
            ans = ans*(n+1-i)/i;
		
		cout<<ans<<endl;
	}
}
