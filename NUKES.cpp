#include<iostream>
using namespace std;

main()
{
	int particles,limit,chambers;
	
	cin>>particles>>limit>>chambers;
	
	while(chambers--)
	{
		 cout<<particles%(limit+1)<<" "; 
		 particles=particles/(limit+1);
	}
}
