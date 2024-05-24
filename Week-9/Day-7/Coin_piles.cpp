#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        long long a,b; cin>>a>>b;
        bool ok=false;
        if(a>b) swap(a,b);

        if(2*a<b) ok=false;
        else {
            a=a%3;
            b=b%3;
            if((a==0 && b==0)||(a==2 && b==1)||(a==1 && b==2)) ok=true;
        }
        if(ok) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    
    return 0;
}
