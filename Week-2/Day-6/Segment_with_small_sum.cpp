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
    while(r<n) {
        sum+=arr[r];
        if(sum<=s) {
            ans=max(ans,r-l+1);
        }
        else {
            sum=sum-arr[l];
            l++;
        }
        r++;
    }
    cout<<ans<<"\n";

    
    return 0;
}
