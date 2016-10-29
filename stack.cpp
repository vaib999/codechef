#include<iostream>
using namespace std;

int stack[10];
int top = -1;
int n = 10;

void push(int num)
{
	if(top >= n-1)
	{
		cout<<"Overflow Condition"<<endl;
	}
	else
	{
		top++;
		stack[top] = num;
	}
}

bool isEmpty()
{
	if(top == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void pop()
{
	if(isEmpty())
	{
		cout<<"Underflow Condition"<<endl;
	}
	else
	{
		top--;
	}
}

int size()
{
	return top+1;
}

int topElement()
{
	return stack[top];
}

main()
{
	push(7);
	cout<<topElement()<<endl;
	push(8);
	pop();
	cout<<topElement()<<endl;
}
