#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; string s;
        cin>>n>>s;
        string ans="";
        int val;
        for(int i=n-1;i>=0;) {
            if(s[i]=='0') {
                val=(s[i-2]-48)*10+s[i-1]-48;
                i=i-3;
            }
            else {
                val=s[i]-48;
                i--;
            }
            ans=ans+char(val+97-1);
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<"\n";
    
    }

    return 0;
}
