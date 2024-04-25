#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(),arr.end());

    int q;
    cin>>q;

    while(q--) {
        int l,r;
        cin>>l>>r;

        auto it = lower_bound(arr.begin(),arr.end(),l);
        auto it2= upper_bound(arr.begin(),arr.end(),r);

        int ans=(it2-arr.begin())-(it-arr.begin());
        cout<<ans<<" ";

    }
    cout<<"\n";


    
    return 0;
}
