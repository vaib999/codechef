#include<iostream>
#include<math.h>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int high,low,i,j,flag=0;
		cin>>low>>high;
		
		if(low<=2)
		{
			low=2;
			cout<<low<<endl;
		}
			
		for(i=low;i<=high;i++)
		{
			flag=0;
			
			if(i<2 || i%2==0)
			{
				flag=1;
			}
			else
				for(j=3;j<=sqrt(i);j+=2)
				{
				
					if(i%j==0)
					{
						flag=1;
						break;
					}
				}
			if(flag==0)
			{
				cout<<i<<endl;
			}
		}
		cout<<endl;
	}
}

