#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        string s; cin>>s;
        int zero=0, one=0;
        for(int i=0;i<n;i++) {
            if(s[i]=='0') zero++;
            else one++;
        }
        bool ok=false;
        for(int i=1;i<n;i++) {
            if(s[i]!=s[i-1]) {
                ok=true;
                break;
            }
        }
        if(zero>one || ok==true) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}
