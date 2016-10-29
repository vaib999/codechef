#include<iostream>
#include<algorithm>
using namespace std;

int a[100005];

int bs(int value,int low,int high)
{
	if(low>=high)
	{
		return low;
	}
	else if(value == a[low])
	{
		return low;
	}
	else if(value == a[high])
	{
		return high;
	}
	else
	{
		int mid = (low+high)/2;
		
		if(value>a[mid])
		{
			return bs(value,mid,high);
		}
		else
		{
			return bs(value,low,mid);
		}
	}
}

main()
{
	int t,q,request;
	
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	
	sort(a,a + t);
	
	cin>>q;
	
	while(q--)
	{
		cin>>request;
		
		cout<<bs(request,0,t-1)+1<<endl;
	}
}
