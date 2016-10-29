#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    bitset < 2001 > friends[2001];
    int N,i ,j;
    
    cin>>N;
    long long total = 0;
 
    for(i=0;i<N;++i)
            cin>>friends[i];

    for(i=0;i<N;++i)
    {
    	for(j=0;j<N;++j)
    	{
    		if(i!=j && !friends[i].test(N-1-j))
       		{
    			if((friends[i]&friends[j]).any())
    			{
    				++total;
    			}
    		}
    	}
    }
    cout<<total;
    return 0;
}
