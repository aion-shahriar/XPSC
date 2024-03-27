#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    long long s;
    cin>>n>>s;
    vector<long long>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    long long r=0,l=0, ans=0;
    long long sum=0;
    long long cnt=0;
    while(r<n) {
        sum+=arr[r];
        if(sum<=s) {
            ans=ans+(r-l+1);
        }
        else {
            while(sum>s && l<r) {
                sum=sum-arr[l];
                l++;
            }
            if(sum<=s) {
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<"\n";

    return 0;
}
