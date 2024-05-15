#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b) {
    return __gcd(a,b);
}
long long lcm(long long a,long long b) {
    return ((a/gcd(a,b))*b);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    long long ans=0, overlap;

    ans+=(n/a)*p;
    ans+=(n/b)*q;

    overlap=(n/lcm(a,b));

    ans-=overlap*(p+q);
    ans+=overlap*max(p,q);

    cout<<ans<<"\n";

    
    return 0;
}
