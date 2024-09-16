 #include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        int n; cin>>n;
        string ans="";
        while(n--) {
            if(n%5==0) ans+='a';
            if(n%5==1) ans+='e';
            if(n%5==2) ans+='i';
            if(n%5==3) ans+='o';
            if(n%5==4) ans+='u';
        }
        sort(ans.begin(),ans.end());
        cout<<ans<<"\n";
    }
    return 0;
}
