#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>r(n);
        for(int &x : r) cin>>x;

        vector<ll>prefix_r(n);

        prefix_r[0]=r[0];
        for(int i=1;i<n;i++) {
            prefix_r[i]=prefix_r[i-1]+r[i];
        }



        int m; cin>>m;
        vector<int>b(m);
        for(int &x : b) cin>>x;

        vector<ll>prefix_b(m);

        prefix_b[0]=b[0];
        for(int i=1;i<m;i++) {
            prefix_b[i]=prefix_b[i-1]+b[i];
        }

        ll one=*max_element(prefix_r.begin(),prefix_r.end());
        //cout<<"one="<<one<<"\n";
        if(one<0) one=0;
        ll two=*max_element(prefix_b.begin(),prefix_b.end());
        if(two<0) two=0;
        //cout<<"two="<<two<<"\n";

        cout<<one+two<<"\n";



    }

    
    return 0;
}
