#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        // cout<<"a-> ";
        // for(int i=0;i<n;i++) cout<<a[i]<<" ";
        // cout<<"\n";

        // cout<<"b-> ";
        // for(int i=0;i<n;i++) cout<<b[i]<<" ";
        // cout<<"\n";


        string res="";
        int i;
        for(i=0;i<n;i++) {
            if((b[i]-a[i])!=0 && (b[i]-a[i])!=1) {
                res="NO";
                break;
            }
        }
        if(i==n) res="YES";
        cout<<res<<"\n";
    }

    
    return 0;
}
