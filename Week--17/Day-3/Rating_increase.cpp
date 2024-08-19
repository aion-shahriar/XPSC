#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t; cin>>t;
    while(t--) {
        string s;
        cin>>s;
        ll sz=s.size();
        string s1="",s2="";
         
        ll p=1;
        for(int i=1;i<sz;i++) {
            if(s[i]!='0') {
                p=i;
                break;
            }
        }
        for(int i=0;i<p;i++) {
            s1.push_back(s[i]);
        }
        for(int i=p;i<sz;i++) {
            s2.push_back(s[i]);
        }
        ll a=stoi(s1);
        ll b=stoi(s2);
        if(a<b) {
            cout<<a<<" "<<b<<"\n";
        }
        else {
            cout<<-1<<"\n";
        }
    }

    
    return 0;
}
