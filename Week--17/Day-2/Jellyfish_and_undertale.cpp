#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        int a,b,n;
        cin>>a>>b>>n;
        
        long long ans=b;
        
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            ans=ans+min(a-1,x);
        }
        cout<<ans<<"\n";
    }

    
    return 0;
}
