#include<iostream>
#include <stdlib.h>
using namespace std;

main()
{
	for(int j=0;j<7;j++)
	{
		for(int i=0;i<4-abs(3-j);i++)
		{
			cout<<"#";
		}
		cout<<"\n";
	}

}
