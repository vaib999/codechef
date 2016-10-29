#include<iostream>
using namespace std;

char queue[10];
int rear = 0;
int front = 0;
int qsize = 10;

void enqueue(char num)
{
	if(rear < qsize)
	{
		queue[rear] = num;
		rear++;
	}
	else
	{
		cout<<"Overflow Condition"<<endl;
	}
}

void dequeue()
{
	if(front == rear)
	{
		cout<<"Underflow Condition"<<endl;
	}
	else
	{
		queue[front] = 0;
		front++;
	}
}

char Front()
{
	return queue[front];
}

main()
{
	enqueue('v');
	cout<<Front();
	enqueue('a');
	cout<<Front();
	enqueue('i');
	cout<<Front();
	enqueue('b');
	cout<<Front();
	enqueue('h');
	cout<<Front();
	enqueue('a');
	cout<<Front();
	enqueue('v');
	cout<<Front();
}
