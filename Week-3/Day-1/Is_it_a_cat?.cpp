#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s;
        cin>>s;

        for(int i=0;i<n;i++) {
            if(s[i]>=65 && s[i]<=90) {
                s[i]+=32;
            }
        }
        s.erase(unique(s.begin(),s.end()),s.end());
        if(s=="meow") cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
          
    }
 
    return 0;
}
