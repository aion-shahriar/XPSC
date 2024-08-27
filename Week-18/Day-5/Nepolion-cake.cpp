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

        vector<int>ans(n);
        int x=0;

        for(int i=n-1;i>=0;i--) {
            if(x<arr[i]) x=arr[i];
            if(x>0) {
                ans[i]=1;
                x--;
            }
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }

    return 0;
}
