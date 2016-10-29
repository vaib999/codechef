#include<iostream>
#include<string>
using namespace std;

main()
{
	int t;
	
	cin>>t;
	
	while(t--)
	{
		string s;
		
		cin>>s;
		
		int num_a = 0,num_b = 0,num_c = 0,b_string = 0,i,j;
		
		for(i=0;i<s.length();i++)
		{
			for(j=i;j<s.length();j++)
			{
				if(s[i] == 'a' && s[j] == 'a')
				{
					num_a++;
				}
				else if(s[i] == 'b' && s[j] == 'b')
				{
					num_b++;
				}
				else if(s[i] == 'c' && s[j] == 'c')
				{
					num_c++;
				}
				
				if(num_a == num_b && num_b == num_c)
				{
					b_string++;
				}
			}
		}
		cout<<b_string<<endl;
	}
}
