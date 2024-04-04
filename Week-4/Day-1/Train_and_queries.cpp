#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n,q;
        cin>>n>>q;

        vector<int>stations(n);
        map<int,pair<int,int> >mp;
        for(int i=0;i<n;i++) {
            cin>>stations[i];
            if(!mp.count(stations[i])) {
                mp[stations[i]].first=i;
                mp[stations[i]].second=i;
            }
            else {
                mp[stations[i]].second=i;
            }
        }

        while(q--) {
            int st, end;
            cin>>st>>end;

            if(!mp.count(st) || !mp.count(end) || mp[st].first > mp[end].second) {
                cout<<"NO"<<"\n";
            }
            else {
                cout<<"YES"<<"\n";
            }


        }
    }

    
    return 0;
}
