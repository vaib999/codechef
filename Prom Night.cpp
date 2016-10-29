#include<iostream>
using namespace std;

int boys[10005],girls[10005];

int partition(int a[],int start,int end)
{
	int pIndex,pivot,temp,i;
	
	pIndex = start;
	pivot = a[end];
	
	for(i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			temp = a[pIndex];
			a[pIndex] = a[i];
			a[i] = temp;
			
			pIndex++;
		}
	}
	temp = a[pIndex];
	a[pIndex] = a[end];
	a[end] = temp;
	
	return pIndex;
}

void quickSort(int a[],int start,int end)
{
	int pIndex;
	
	if(start<end)
	{
		pIndex = partition(a,start,end);
		quickSort(a,start,pIndex-1);
		quickSort(a,pIndex+1,end);
	}
}
main()
{
	int t;
	
	cin>>t;
	
	while(t--)
	{
		int b,g,i;
		
		cin>>b>>g;
		
		for(i=0;i<b;i++)
		{
			cin>>boys[i];
		}
		for(i=0;i<g;i++)
		{
			cin>>girls[i];
		}
		
		quickSort(boys,0,b-1);
		quickSort(girls,0,g-1);
		
		bool no_prom = false;
		for(i=0;i<b;i++)
		{
			if(boys[i]<=girls[i])
			{
				no_prom = true;
			}
		}
		
		if(no_prom)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}
