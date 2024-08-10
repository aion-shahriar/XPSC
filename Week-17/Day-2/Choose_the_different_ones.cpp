#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n,m,k; cin>>n>>m>>k;

        vector<int>a(n),b(m);
        set<int>st_a;
        set<int>st_b;
        for(int &x : a) {
            cin>>x;
            if(x>=1 && x<=k) {
                st_a.insert(x);
            }
        }
        for(int &x : b) {
            cin>>x;
            if(x>=1 && x<=k) {
                st_b.insert(x);
            }
        }
        if(st_a.size()<(k/2) || st_b.size()<(k/2)) {
            cout<<"NO"<<"\n";
        }
        else {
            st_a.insert(st_b.begin(),st_b.end());
            if(st_a.size()==k) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
    return 0;
}
        

    



    
