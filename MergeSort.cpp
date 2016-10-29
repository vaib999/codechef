#include<iostream>
using namespace std;

int a[1000005];

void merge(int left[],int right[],int a[])
{
	int left_size,right_size,i,j,k;
	
	left_size = sizeof(left);
	right_size = sizeof(right);
	
	i = 0,j = 0, k = 0;
	
	while(i<left_size && j<right_size)
	{
		if(left[i]<=right[j])
		{
			a[k] = left[i];
			i = i+1;
		}
		else
		{
			a[k] = right[j];
			j = j+1;
		}
		k = k+1;
	}
}

void mergeSort(int array[],int length)
{	
	int mid,i,left[1000005],right[1000005];
	
	if(length < 2)
	{
		return ;
	}
	
	mid = length/2;
	
	for(i=0;i<mid;i++)
	{
		left[i] = array[i];
	}
	
	for(i=mid;i<length;i++)
	{
		right[i] = array[i];
	}
	
	mergeSort(left,mid);
	mergeSort(right,length-mid);
	merge(left,right,array);
}

main()
{
	int t,i;
	
	cin>>t;
	
	for(i=0;i<t;i++)
	{
		cin>>a[i];
	}
	
	mergeSort(a,t);

	for(i=0;i<t;i++)
	{
		cout<<a[i]<<" ";
	}
}
