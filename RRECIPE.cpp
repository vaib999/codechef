#include<iostream>
#include<string>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string palin;
		int i,j,ans,flag;
		cin>>palin;
		
		ans=1;
		for(i=0,j=palin.size()-1;i<=j;i++,j--)
		{
			flag=0;
			
			if(palin[i]=='?' && palin[j]=='?')
			{
				ans=(ans*26)%10000009;
			}
			else if(palin[i]==palin[j])
			{
				ans=(ans*1)%10000009;
			}
			else if(palin[i]=='?' || palin[j]=='?')
			{
				flag=1;
			}
			else if(palin[i]!=palin[j] && flag==0)
			{
				ans=0;
				break;
			}
		}
		cout<<ans<<endl;
	}
}
