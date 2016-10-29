#include <iostream>
#include<string>
using namespace std;

int main()
{
    int length,query;
    string assig;
    
    cin>>length>>query>>assig;
    
    while(query--)
    {
    	int l,r,k;
    	int count[27]={0};
    	
    	cin>>l>>r>>k;
    	
    	i=0;
    	while(assig[i]!='\0')
    	{
    		count[assig[i]-97]++;
    		i++;
    	}
    	
    return 0;
}
