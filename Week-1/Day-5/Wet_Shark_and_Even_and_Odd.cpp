#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    vector<ll>arr(n);
    ll sum=0;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());

    if(sum%2==0) {
        cout<<sum<<"\n";
    }
    else {
        for(int i=0;i<n;i++) {
            ll ans=sum-arr[i];
            if(ans%2==0) {
                cout<<ans<<"\n";
                break;
            }
        }
    }

    
    return 0;
}
