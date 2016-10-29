#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int leaf,level,branch,i;
		
		cin>>level;
		
		branch=1;
		for(i=1;i<=level-1;i++)
		{
			cin>>leaf;
			if(leaf>branch)
				break;
			branch=branch-leaf;
			branch=branch*2;
		}
		cin>>leaf;
		if(i==level && branch==leaf)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}
