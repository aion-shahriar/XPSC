#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n,q; cin>>n>>q;
        vector<long long>arr(n+1);
        for(int i=1;i<=n;i++) {
            cin>>arr[i];
        }
        vector<long long>pre(n+1);
        pre[1]=arr[1];
        for(int i=2;i<=n;i++) {
            pre[i]=pre[i-1]+arr[i];
        }
        while(q--) {
            long long l,r,k; cin>>l>>r>>k;
            long long sum=pre[n];
            sum=sum-(pre[r]-pre[l-1]);
            long long add=(r-l+1)*k;
            sum=sum+add;
            if(sum%2==1) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }

    
    return 0;
}
