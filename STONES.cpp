#include<iostream>
#include<string.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		char s1[1000],s2[1000];
		cin>>s1>>s2;
		
		int count=0;
		for(int i=0;i<strlen(s2);i++)
		{
			for(int j=0;j<strlen(s1);j++)
			{
				if(s1[j]==s2[i])
				{
					count++;
					break;
				}
			}
		}
		cout<<count<<endl;
	}
}
