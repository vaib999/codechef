#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s,c;
	int i;
	
	while(getline(cin,s))
	{
		bool con=false;
		c="";
		
		for(i=0;i<s.length();i++)
		{
			if(con)
			{
				c+=s[i];
				continue;
			}
			
			if(i<s.length()-1 && s[i]=='/' && s[i+1]=='/')
			{
				c+="//";
				con=true;
				i++;
			}
			else if(i<s.length()-1 && s[i]=='-' && s[i+1]=='>')
			{
				c+='.';
				i++;
			}
			else
			{
				c+=s[i];
			}
			
		}
		cout<<c<<endl;
	}

    return 0;
}

