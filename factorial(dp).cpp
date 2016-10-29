#include <iostream>
using namespace std;

int fac[1000]={-1};

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int num;
		cin>>num;
		
		//fac[1000]={-1};
		
		fac[0]=1;
		fac[1]=1;
		
		for(int i=2;i<=num;i++)
		{
			fac[i]=(i*fac[i-1])%1000000007;
		}
		
		cout<<fac[num]<<endl;
		
	}
	
    return 0;
}

