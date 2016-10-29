#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	
	while(test--)
	{
		long long int n,a[100007],i,q1,q2,q3,q4,local_max,global_max;
		cin>>n>>q1>>q2>>q3>>q4;
		
		for(i=0;i<n;i++)
			cin>>a[i];
			
		global_max=-1000000002;local_max=-1000000002;
		
		for(i=0;i<n;i++)
		{
			if(a[i]==q1 || a[i]==q2 || a[i]==q3 || a[i]==q4 )
				local_max=-1000000002;
			else 
			{
				local_max=max(a[i],local_max+a[i]);
			}
			global_max=max(global_max,local_max);
		}
		cout<<global_max<<endl;
	}
} 
