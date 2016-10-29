#include<iostream>
using namespace std;

int N = 5;

void maxHeapify (int Arr[ ], int i, int N)
{
    int left = 2*i;                   //left child
    int right = 2*i +1;           //right child
    
    int largest;
    
    if(left<= N and Arr[left] > Arr[i] )
          largest = left;
    else
         largest = i;
    if(right <= N and Arr[right] > Arr[largest] )
        largest = right;
    if(largest != i )
    {
        swap (Arr[i] , Arr[largest]);
        maxHeapify (Arr, largest,N);
    } 
 }

void buildMaxHeap (int Arr[ ])
{
	for(int i = N/2 ; i >= 1 ; i-- )
	{
	    maxHeapify (Arr, i, N) ;
	}
}

main()
{
	int queue[5]={4,2,5,6,3};
	
	buildMaxHeap(queue);
	
	cout<<queue[0]<<endl;
	
}
