#include<iostream>
using namespace std;

int a[1000005];

int partition(int start,int end)
{
	int pivot,pIndex,i,temp;
	
	pivot = a[end];
	pIndex = start;
	
	for(i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			temp = a[i];
			a[i] = a[pIndex];
			a[pIndex] = temp;
			
			pIndex++;
		}
	}
	temp = a[pIndex];
	a[pIndex] = a[end];
	a[end] = temp;
	
	return pIndex;
}

void quickSort(int start,int end)
{
	int pIndex;
	
	if(start<end)
	{
		pIndex = partition(start,end);
		
		quickSort(start,pIndex-1);
		quickSort(pIndex+1,end);
	}
}

main()
{
	int t,i;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>a[i];
	}
	
	quickSort(0,t-1);
	
	for(i=0;i<t;i++)
	{
		cout<<a[i]<<" ";
	}
}
