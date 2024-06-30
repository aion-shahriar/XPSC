#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,q;
    cin>>n>>q;

    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    vector<int>diff(n+1);

    for(int i=1;i<=q;i++) {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        diff[l]++;
        diff[r+1]--;
    }

    for(int i=1;i<=n;i++) {
        diff[i]=diff[i-1]+diff[i];
    }

    sort(arr.begin(),arr.end(),greater<int>());
    sort(diff.begin(),diff.end(),greater<int>());

    long long ans=0;

    for(int i=0;i<n;i++) {
        ans=ans+(1LL*diff[i]*arr[i]);
    }
    cout<<ans<<"\n";

    return 0;
}
