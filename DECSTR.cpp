#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int i,j;
 
        int m = n%25;
        int k = n/25;
        if(m != 0)
        {
 
        	for(i=m+1;i>0;i--)
        	{
             	cout<<char(97+i-1);
        	}
        }
        for(i=1;i<=k;i++)
        {
            cout<<"zyxwvutsrqponmlkjihgfedcba";
        }
 
        cout<<endl;
 
    }
} 
