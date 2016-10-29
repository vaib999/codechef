#include<iostream>
using namespace std;

int a[1000];

void s_sort(int size)
{
	int i,j,temp,min;
	
	for(j=0;j<size;j++)
	{
		min = j;
	
		for(i=j+1;i<size;i++)
		{
			if(a[i]<a[min])
			{
				min = i;
			}
		}
		temp = a[min];
		a[min] = a[j];
		a[j] = temp;
	}
}

main()
{
	int size,money,i;
	
	cin>>size>>money;
	
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	s_sort(size);
	
	int total = 0;
	
	i=0;
	while(total < money)
	{
		total+=a[i];
		i++;
	}
	
	cout<<i-1<<endl;
}
