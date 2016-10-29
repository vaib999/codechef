#include<iostream>
#include<algorithm> 
using namespace std;

unsigned long long max(unsigned long long a,unsigned long long b)
{
	if(a>=b)
		return a;
	else
		return b;
}
main()
{
	unsigned long long num,i,j,ans,arr[5000];
	
	cin>>num;

	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	
	ans = 0;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			ans = max(ans,(arr[i] & arr[j]));
		}
	}

	cout<<ans<<endl;
}

