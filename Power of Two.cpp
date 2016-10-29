#include <iostream>
using namespace std;

int main()
{
    int t;
    
    cin>>t;
    
    while(t--)
    {
    	int n,a[205],i,j,flag,temp;
    	
    	cin>>n;
    	
    	for(i=0;i<n;i++)
    	{
    		cin>>a[i];
    	}
    	
    	if(n==1)
    	{
    		if((a[0]&(a[0]-1))==0)
    		{
    			flag=1;
    			cout<<"YES"<<endl;	
    		}
    		else
    		{
    			flag=0;	
    		}
    	}
    	else
    	{
	    	temp=0;
	    	flag=0;
	    	for(i=0;i<n;i++)
	    	{
	    		for(j=i+1;j<n;j++)
	    		{
	    			
	    			temp = a[i]&a[j];
	    			
	    			if((temp&(temp-1))==0 && temp>0)
	    			{
	    				flag=1;
	    				break;
	    			}
	    		}
	    		if(flag==1)
	    		{	
	    			cout<<"YES"<<endl;
	    			break;
	    		}
	    	}
	    }
    	

    	if(flag==0)
    		cout<<"NO"<<endl;
    }
    return 0;
}

