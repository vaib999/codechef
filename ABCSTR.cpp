#include <bits/stdc++.h>
using namespace std;
typedef vector<long long int> vi;
typedef vector<vi> vvi;
int main()
{
        string s; long long int a=0, b=0, c=0, res=0;
        cin>>s; long long int n= s.length();
        map<pair<long long int, long long int>, long long int> m;
        m[make_pair(0,0)]=1;
        for(long long int i=0;i<n; i++ ){
            if(s[i]=='A')a++;
            if(s[i]=='B')b++;
            if(s[i]=='C')c++;
            res+=m[make_pair(a-b,a-c)];
            m[make_pair(a-b,a-c)]++;;
        }cout<<res<<endl;
}
 
