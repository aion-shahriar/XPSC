#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];

        bool ans=false;
        for(int i=1;i<n-1;i++) {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
                cout<<"YES"<<"\n";
                cout<<i<<" "<<i+1<<" "<<i+2<<"\n";
                ans=true;
                break;
            }
        }
        if(!ans) cout<<"NO"<<"\n";
    }

    
    return 0;
}
