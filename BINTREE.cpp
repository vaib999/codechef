#include <iostream>
using namespace std;
 
main() 
{
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int i,j,dist=0;
	    cin>>i>>j;
	    
	    while(i!=j)
	    {
	        if(i>j)
	            i/=2;
			else
				j/=2;
	        dist++;
	    }
	    cout<<dist<<endl;
	}
}
