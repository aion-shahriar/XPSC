#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;

        int ans=n-1;

        int b=0,a=0;

        for(int i=0;i<n;i++) {
            if(s[i]=='B') b++;
            else break;
        }

        for(int i=n-1;i>=0;i--) {
            if(s[i]=='A') a++;
            else break;
        }

        ans=ans-(a+b);
        if(ans<0) ans=0;
        cout<<ans<<"\n";
    }

    
    return 0;
}
