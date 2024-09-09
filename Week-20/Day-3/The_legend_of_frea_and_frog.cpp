#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int x,y,k; cin>>x>>y>>k;
        int a=x/k;
        int b=y/k;
        if(x%k!=0) a++;
        if(y%k!=0) b++;
        if(a>b) cout<<a*2-1<<"\n";
        else cout<<b*2<<"\n";
    }
    return 0;
}
