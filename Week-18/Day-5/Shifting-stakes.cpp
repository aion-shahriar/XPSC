#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        ll sum=0,need=0;
        bool ok=true;
        for(int i=0;i<n;i++) {
            need+=i;sum+=arr[i];
            if(sum<need) {
                ok=false;
                break;
            }
        }
        if(ok) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
