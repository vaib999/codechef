#include<iostream>
using namespace std;

main()
{
	int t;
	
	cin>>t;
	
	while(t--)
	{
		long long tiles,tile_array[100005],max,max_tile_array_index,i,max_vel;
		
		cin>>tiles;
		
		max=0;
		
		for(i=0;i<tiles;i++)
		{
			cin>>tile_array[i];
			
			if(tile_array[i] + i>=max)
			{
				max=tile_array[i] + i;
			}
		}
		
		cout<<max<<endl;
	}
}
