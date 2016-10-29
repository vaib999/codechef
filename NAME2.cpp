#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		string s1,s2,n1,n2;
		cin>>s1>>s2;
		
		if(s1.length()>s2.length())
		{
			n1=s2;
			n2=s1;
		}
		else
		{
			n1=s1;
			n2=s2;
		}
		int flag;
		int j=0;
		
		for(int i=0;i<n1.length();i++)
		{
			flag=0;
			while(j<n2.length())
			{
				if(n1[i]==n2[j])
				{
					flag=1;
					j++;
					break;
				}
				j++;
			}
			if(flag==0)
			{
				break;
			}
		}
		if(flag==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		
	}
}
