#include<iostream>
using namespace std;

int main()
{
	int n,q,i;
	cin>>n>>q;
	
	long long a[100005],b[100005],temp;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
		
	for(i=1;i<n;i+=2)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
		
	for(i=1;i<n;i++)
	{
		a[i]+=a[i-1];
		b[i]+=b[i-1];
	}
	
	while(q--)
	{
		int query,l,r;
		cin>>query>>l>>r;
		
		if(query==1)
		{
			if(l%2)
			{
				cout<<a[r-1]-a[l-2]<<endl;
			}
			else
			{
				cout<<b[r-1]-b[l-2]<<endl;
			}
			
		}
		else
		{
			if(l%2)
			{
				cout<<b[r-1]-b[l-2]<<endl;
			}
			else
			{
				cout<<a[r-1]-a[l-2]<<endl;
			}
		}
	}
	
	return 0;
}
