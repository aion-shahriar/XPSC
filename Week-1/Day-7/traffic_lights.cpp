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

        char ch;
        cin>>ch;

        string s;
        cin>>s;

        if(ch=='g') {
            cout<<0<<"\n";
        }
        else {
            vector<int>g_idx;
            s=s+s;
            for(int i=0;i<s.size();i++) {
                if(s[i]=='g') {
                    g_idx.push_back(i);
                }
            }
            int ans=0;
            for(int i=0;i<n;i++) {
                if(s[i]==c) {
                    int ub=lower_bound(g_idx.begin(),g_idx.end(),i)-g_idx.begin();
                    ans=max(ans,g_idx[ub]-i);
                }
            }
            cout<<ans<<"\n";
        }

    }

    return 0;
}
