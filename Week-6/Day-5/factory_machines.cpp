#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t; cin>>n>>t;

    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    auto ok=[&](long long int m) {
        long long int total=0;
        for(int i=0;i<n;i++) {
            total+=(m/arr[i]);
            if(total>=t) return true;
        }
        return false;
    };
    long long int l=1,r=1e18;
    long long int mid,ans;
    while(l<=r) {
        mid=r-(r-l)/2;
        if(ok(mid)) {
            ans=mid;
            //cout<<ans<<"\n";
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    cout<<ans<<"\n";

    
    return 0;
}
