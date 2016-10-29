#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
    	string s,aux;
    	int l,r,i,j;
    	
    	cin>>s>>l>>r;
    	
    	for(i=l,j=0;i<=r;j++,i++)
    	{
    		aux[j]=s[i];
    	}
    	aux[j]='\0';
    	
    	cout<<aux.length();
    	
    }
    
    return 0;
}

