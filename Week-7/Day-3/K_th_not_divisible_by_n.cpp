#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        ll n,k;
        cin>>n>>k;

        ll l=0,r=1e18,mid,ans;

        while(l<=r) {
            mid=l+(r-l)/2;
            if((mid-(mid/n))>=k) {
                ans=mid;
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
