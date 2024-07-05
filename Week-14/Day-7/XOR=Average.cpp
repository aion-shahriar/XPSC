#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        long long n; cin>>n;

    
        if(n%2==1) {
            for(int i=1;i<=n;i++) cout<<1<<" ";
            cout<<"\n";
        }
        else {
            cout<<1<<" "<<3<<" ";
            for(int i=1;i<=n-2;i++) cout<<2<<" ";
            cout<<"\n";

        }
    }

    
    return 0;
}
