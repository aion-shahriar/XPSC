#include <bits/stdc++.h>
using namespace std;
bool is_prime(long long n) {
    if(n==1) return false;

    for(int i=2;i*i<=n;i++) {
        if(n%i==0) return false;
    }
    return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;

    int ans=0;
    if(is_prime(n)) ans=1;
    else if(n%2==0) ans=2;
    else if(n%2==1) {
        if(is_prime(n-2)) ans=2;
        else ans=3;
    }


    cout<<ans<<"\n";

    

    
    return 0;
}
