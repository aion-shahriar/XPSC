#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        string s; cin>>s;

        int sz=s.size();
        int big=0;
        int small=0;
        for(int i=sz-1;i>=0;i--) {
            if(s[i]=='B') {
                big++;
                s[i]='$';
            }
            else if(s[i]=='b') {
                small++;
                s[i]='$';
            }
            else if(s[i]>='A' && s[i]<='Z' && big>0) {
                s[i]='$';
                big--;
            }
            else if(s[i]>='a' && s[i]<='z' && small>0) {
                s[i]='$';
                small--;
            }

        }
        for(int i=0;i<sz;i++) {
            if(s[i]=='$') continue;
            else cout<<s[i];
        }
        cout<<"\n";
    }

    
    return 0;
}
