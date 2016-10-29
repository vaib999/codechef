#include<iostream>
using namespace std;

main()
{
	long int l1,l2,l3;
	cin>>l1>>l2>>l3;
	
	long int max_num=0,count=0;
	long int a[1000001]={0};
	long int num;
	
	for(int i=0;i<l1+l2+l3;i++)
	{
		cin>>num;
		a[num]=a[num]+1;
		if(num>max_num)
		{
			max_num=num;
		}
		if(a[num]==2)
		{
			count++;
		}
	}

	cout<<count<<endl;
	
	for(int i=1;i<max_num;i++)
	{
		if(a[i]>=2)
		{
			cout<<i<<endl;
		}
	}
}
