#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        long long sum=arr[n-1];
        long long ans=LLONG_MIN;
        for(int i=n-2;i>=0;i--) {
            sum+=arr[i];
            ans=max(sum,ans);
            sum-=arr[i];

        }
        cout<<ans<<"\n";


    }

    
    return 0;
}
