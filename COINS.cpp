#include<iostream>
#define m 1000000
using namespace std;

long long dp[m];

long long decision(long long a)
{
    if(a<m)
		return dp[a];
    return max(a,decision(a/2)+decision(a/3)+decision(a/4));
}

main()
{
	long long int num;
		
	dp[0]=0;
	for(long long int i=0;i<m;i++)
	{
		dp[i]=max(i,dp[i/2]+dp[i/3]+dp[i/4]);
	}
	
	while(cin>>num)
	{
		cout<<decision(num)<<endl;
	}
}
