#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        string s,t; cin>>s>>t;
        string tmp_s=s, tmp_t=t;

        while(tmp_s.size()!=tmp_t.size()) {
            if(tmp_s.size()<tmp_t.size()) tmp_s+=s;
            else tmp_t+=t;
        }
        if(tmp_s==tmp_t) cout<<tmp_s<<"\n";
        else cout<<-1<<"\n"; 
    }
    return 0;
}
