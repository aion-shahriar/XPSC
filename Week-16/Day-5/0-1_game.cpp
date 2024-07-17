#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))


string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }

bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() {cout<<"YES\n";}
void no() {cout<<"NO\n";}

bool is_Power_Of_Two(int num) {
    if (num == 0) return false;

    return (ceil(log2(num)) == floor(log2(num)));
}
int next_Power_Of_2(int x) {
    int cnt = 0;
    
    while(x>0){
        cnt++;
        x=x>>1;
    }
    return (1<<cnt);
    //power of 2 nums are 2,4,8,16,32
    //if 17 number is given it will return 32
}

void solve() {
    string s; cin>>s;
    int sz=s.size();
    int zero=0,one=0;
    string ans="";
    sort(s.begin(),s.end());
    for(int i=0;i<sz;i++) {
        if(s[i]=='0') zero++;
        else break;
    }
    one=sz-zero;
    if(zero==0 || one==0) ans="NET";
    else {
        ll mn=min(zero,one);
        if(mn%2==1) ans="DA";
        else ans="NET";
    }
    cout<<ans<<"\n";

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--) {
        solve();
    }

    return 0;
}
