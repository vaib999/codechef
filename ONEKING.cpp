#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;
 
vector<pair<long long,long long> >v,v1;
 
int main(){
 
    int t;
    cin >> t;
    while(t--) {
        v.clear(); v1.clear();
        long long n,i,x,y,ans=0;
        cin >> n;
        for(i=1;i<=n;i++) {
            cin >> x >> y;
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++) {
            v1.push_back(make_pair(v[i].first,-(i + 1)));
            v1.push_back(make_pair(v[i].second,i + 1));
        }
        sort(v1.begin(),v1.end()); x = 0; y = 0;
        for(i=0;i<v1.size();i++) {
            if(v1[i].second > 0) {
                if(v1[i].second == v1[i - 1].second) continue;
                if(v1[i].second > x) {
                    ans++; x = y;
                }
            }
            else {
                y++;
            }
        }
        cout << ans << "\n";
    }
	}
    
