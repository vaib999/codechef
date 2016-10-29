#include<iostream>
using namespace std;

main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int num,laddu=0;
		string citizen;
		string activity;

		cin>>num;
		cin>>citizen;
	
	
		for(int i=0;i<num;i++)
		{
			cin>>activity;
		
			if(activity=="CONTEST_WON")
			{
				int rank;
				cin>>rank;
			
				if(rank<=20&&rank>=1)
				{
					laddu=laddu+(20-rank);
				}
				laddu+=300;
			}	
			else if(activity=="TOP_CONTRIBUTOR")
			{
				laddu+=300;
			}
			else if(activity=="BUG_FOUND")
			{
				int bug;
				cin>>bug;
			
				laddu+=bug;
			}
			else if(activity=="CONTEST_HOSTED")
			{
				laddu+=50;
			}
		}
		
		if(citizen=="INDIAN")
		{
			cout<<laddu/200<<endl;
		}
		else if(citizen=="NON_INDIAN")
		{
			cout<<laddu/400<<endl;
		}
	}
}
