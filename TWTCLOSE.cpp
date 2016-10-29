#include<iostream>
using namespace std;

main()
{
	int n,i,k,count=0,arr[1000]={0};
	
	cin>>n>>k;
	
	while(k--)
	{
		string a;
		
		cin>>a;
		
		if(a=="CLOSEALL")
		{
			for(i=0;i<n;i++)
			{
				arr[i]=0;
				count=0;
			}
		}
		else
		{
			int num;
			cin>>num;
			
			if(arr[num]==0)
			{
				arr[num]=1;
				count++;
			}
			else
			{
				arr[num]=0;
				count--;
			}
			
		}
		cout<<count<<endl;
	}
}
