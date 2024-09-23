#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        ll n,k; cin>>n>>k;
        vector<ll>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        ll gold=0;
        ll cnt=0;
        for(int i=0;i<n;i++) {
            if(a[i]>=k) gold+=a[i];
            if(a[i]==0 && gold>0) {
                cnt++;
                gold--;
            }
        }
        cout<<cnt<<"\n";
    
        
    }
    return 0;
}
