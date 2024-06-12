#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        int ans=n+1;
        for(int i=0;i<26;i++) {
            int l=0;
            int r=n-1;
            cnt=0;
            char ch=char('a'+i);
            while(l<=r) {
                if(s[l]==s[r]) {
                    l++;
                    r--;
                }
                else if(s[l]==ch) {
                    cnt++;
                    l++;
                }
                else if(s[r]==ch) {
                    cnt++;
                    r--;
                }
                else {
                    cnt=n+1;
                    break;
                }
            }
            ans=min(cnt,ans);
        }
        if(ans==n+1) cout<<-1<<"\n";
        else cout<<ans<<"\n";
    }

    
    return 0;
}
