#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while(t--) {
        int n; cin>>n;
        string s; cin>>s;

        int st=0,end=0;
        bool ok=false;

        for(int i=0;i<n;i++) {
            if(s[i]=='B' && ok==false) {
                st=i;
                ok=true;
            }
            if(s[i]=='B') {
                end=i;
            }
        }
        int ans=end-st;
        cout<<ans+1<<"\n";
    }
    return 0;
}
