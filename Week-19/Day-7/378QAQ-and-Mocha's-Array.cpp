#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        ll n; cin>>n;
        vector<ll>a(n);
        vector<ll>b;
        for(int i=0;i<n;i++) cin>>a[i];

        int mn=INT_MAX;
        for(int i=0;i<n;i++) {
            if(a[i]<mn) {
                mn=a[i];
            }
        }
        //cout<<"mn1="<<mn<<"\n";
        for(int i=0;i<n;i++) {
            if(a[i]%mn!=0) {
                b.push_back(a[i]);
            }
        }
        if(b.size()==0) cout<<"YES"<<"\n";
        else {
            mn=INT_MAX;
            int sz=b.size();
            for(int i=0;i<sz;i++) {
                if(b[i]<mn) {
                    mn=b[i];
                }
            }
            //cout<<"mn2="<<mn<<"\n";
            bool ok=true;
            for(int i=0;i<sz;i++) {
                if(b[i]%mn!=0) {
                    ok=false;
                    break;
                }
            }
            if(ok) cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
    return 0;
}
