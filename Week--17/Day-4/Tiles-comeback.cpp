#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    ll t; cin>>t;
    while(t--) {
        ll n,k; cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        if(a[0]==a[n-1]) {
            ll cnt=0;
            for(int i=0;i<n;i++) {
                if(a[i]==a[0]) cnt++;
                if(cnt==k) break;
            }
            if(cnt==k) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
        else {
            ll cnt1=0, cnt2=0;
            ll i=0;
            for(i=0;i<n;i++) {
                if(a[i]==a[0]) cnt1++;
                if(cnt1==k) break;
            }
            for(i=i+1;i<n;i++) {
                if(a[i]==a[n-1]) cnt2++;
                if(cnt2==k) break;
            }

            if(cnt1==k && cnt2==k) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
        
    return 0;
}
