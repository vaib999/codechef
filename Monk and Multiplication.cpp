#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	priority_queue<int> q;
	
	cin>>n;
	
	long long a[n];
	long long x,y,z;
	
	for(i = 0; i < n; i++) 
	{
		cin>>a[i];
		
		q.push(a[i]);
		
		if(q.size() < 3) 
		{
			cout<<"-1"<<endl;
			continue;
		}
		
		x = q.top();
		q.pop();
		y = q.top();
		q.pop();
		z = q.top();
		q.pop();
		
		q.push(x);
		q.push(y);
		q.push(z);
		
		x = x*y*z;
		
		cout<<x<<endl;
	}
	return 0;
}
