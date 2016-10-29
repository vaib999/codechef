#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int num,b[1000]={0};
		string s;
		
		cin>>num;
		cin>>s;
	
		for(int i=0;i<num;i++)
		{
			if(num==1)
			{
				if(s[i]=='1')
				{
					b[i]=1;
				}
				else
				{
					b[i]=0;
				}
			}
			else if(s[i]=='1'&&i==0)
			{
				b[i]=1;
				b[i+1]=1;
			}
			else if(s[i]=='1'&&i==num-1)
			{
				b[i]=1;
				b[i-1]=1;
			}
			else if(s[i]=='1'&&i>0&&i<num-1)
			{
				b[i-1]=1;
				b[i]=1;
				b[i+1]=1;
			}
		}
		
		int count=0;
		for(int i=0;i<num;i++)
		{
			if(b[i]==0)
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}


