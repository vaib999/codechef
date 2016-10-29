#include<iostream>
#include <bits/stdc++.h>
using namespace std;

main()
{
	int rows,people,temp;
	priority_queue<int> prio_heap;
	
	cin>>rows>>people;
	
	for(int i = 0;i < rows;i++)
	{
		cin>>temp;
		prio_heap.push(temp);
	}
	
	int price = 0,best_row;
	
	while(people--)
	{
		best_row = prio_heap.top();
		price = price + best_row;
		best_row--;
		prio_heap.pop();
		prio_heap.push(best_row);
	}
	cout<<price<<endl;
}
