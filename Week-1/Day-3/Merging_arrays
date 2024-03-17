#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin>>n>>m;

    vector<ll>a(n),b(m);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    vector<ll>ans;
    int l=0,r=0;
    while(l<n || r<m) {
        if(l>=n) {
            ans.push_back(b[r]);
            r++;
        }
        else if(r>=m) {
            ans.push_back(a[l]);
            l++;
        }
        else if(a[l]<b[r]) {
            ans.push_back(a[l]);
            l++;
        }
        else {
            ans.push_back(b[r]);
            r++;
        }
    }
    for(int i=0;i<(n+m);i++) {
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
    

    return 0;
}
