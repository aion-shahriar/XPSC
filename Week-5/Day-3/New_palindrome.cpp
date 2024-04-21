#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int l=s.size();
        bool ok=false;
        for(int i=1;i<(l/2);i++) {
            if(s[i]!=s[0]) {
                ok=true;
                break;
            }
        }
        if(ok) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    
    return 0;
}
