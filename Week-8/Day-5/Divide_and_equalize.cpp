#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        map<int,int>mp;

        for(int i=0;i<n;i++) {
            for(int j=2;j*j<=arr[i];j++) {
                if(arr[i]%j==0) {
                    while(arr[i]%j==0) {
                        mp[j]++;
                        arr[i]=arr[i]/j;
                    }
                }
            }
            if(arr[i]>1) mp[arr[i]]++;
        }
        bool ok=true;
        for(auto [x,y] : mp) {
            // cout<<x<<" "<<y<<"\n";
            if(y%n!=0) {
                ok=false;
            }
        }
        if(ok) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }

    
    return 0;
}
