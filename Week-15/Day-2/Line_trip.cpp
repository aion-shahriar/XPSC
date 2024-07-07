#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    
    while(t--) {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        
        vector<int>a;
        a.push_back(arr[0]);
        for(int i=1;i<n;i++) {
            int x=abs(arr[i]-arr[i-1]);
            a.push_back(x);
        }
        int last=2*(x-arr[n-1]);
        int mx=*max_element(a.begin(),a.end());
        int ans=max(mx,last);
        cout<<ans<<"\n";
    }
}
