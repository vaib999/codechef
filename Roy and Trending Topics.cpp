#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
using namespace std;

vector < pair<long long, long long> > topics;
map<long long,long long> id_zscore_map;

main()
{
    int n;
    long long id, z, p, l, c, s;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>id>>z>>p>>l>>c>>s;
        
        topics.push_back(make_pair( (p*50 + l*5 + c*10 + s*20 - z) , id));
        id_zscore_map[id] = z;
    }
    make_heap(topics.begin(), topics.end());
    
    for(int i=0;i<5;i++)
    {
        cout<<topics.front().second<<" "<<id_zscore_map[topics.front().second] + topics.front().first<<endl;
        pop_heap (topics.begin(),topics.end()); //Rearranges the heap so that top element goes in the last position
		topics.pop_back();//Pops out the last element
    }
}
