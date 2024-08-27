#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n,k; cin>>n>>k;
        int ans=0;
        if(n==k) ans=1;
        else if(n<k) {
            if(k%n==0) ans=k/n;
            else ans=(k/n)+1;
        }
        else {
            if(n%k==0) ans=1;
            else {
                int x=n/k;
                k=k*x;
                if(k%n==0) ans=n/k;
                else ans=(n/k)+1;
            }
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}
