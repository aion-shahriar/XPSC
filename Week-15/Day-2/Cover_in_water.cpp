#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        int cnt=0;
        bool ok = false;
        for(int i=0;i<n;i++) {
            if(s[i]=='.') {
                cnt++;
            }
        }
        for(int i=2;i<n;i++) {
            if(s[i]=='.' && s[i-1]=='.' && s[i-2]=='.') {
                ok=true;
                break;
            }

        }
        if(ok==false) cout<<cnt<<"\n";
        else cout<<2<<"\n";
    }
    return 0;
}
