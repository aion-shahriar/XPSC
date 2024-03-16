
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<int> a(n), b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    long long l=0,r=0,ans=0;
    long long cnt1=0, cnt2=0;
    long long cur=0;
    while(l<n && r<m) {
        cur=a[l];
        cnt1=0, cnt2=0;
        while(cur==a[l] && l<n) {
            cnt1++;
            l++;
        }
        while(cur>b[r]) {
            r++;
        }
        while(cur==b[r] && r<m) {
            cnt2++;
            r++;
        }

        ans=ans+(1LL*cnt1*cnt2);

    }
    cout<<ans<<"\n";

    
    return 0;
}
