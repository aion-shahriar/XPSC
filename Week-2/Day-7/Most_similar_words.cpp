#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n,l; cin>>n>>l;
        vector<string>v(n);

        for(int i=0;i<n;i++) cin>>v[i];

        int ans=INT_MAX;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                string s1=v[i];
                string s2=v[j];
                int val=0;
                for(int k=0;k<l;k++) {
                    val=val+abs(s1[k]-s2[k]);
                }
                ans=min(ans,val);
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}
