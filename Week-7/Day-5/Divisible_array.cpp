#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        ll n;
        cin>>n;
        ll x=2;
        while(n--) {
            cout<<x<<" ";
            x=x+2;
        }
        cout<<"\n";
    }

    
    return 0;
}
