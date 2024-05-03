#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k; cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());


    auto ok=[&](long long mid) {
        long long cnt=0;
        for(int i=(n/2);i<n;i++) {
            if(arr[i]<mid) {
                cnt=cnt+mid-arr[i];
            }
            else {
                cnt=cnt+0;
            }
        }
        if(cnt<=k) return true;
        else return false;
    };


    long long l=1, r=2e9, mid,ans;

    while(l<=r) {
        mid=r-(r-l)/2;
        if(ok(mid)) {
            ans=mid;
            l=mid+1;
        }
        else {
            r=mid-1;
        }
    }
    cout<<ans<<"\n";

    
    return 0;
}
