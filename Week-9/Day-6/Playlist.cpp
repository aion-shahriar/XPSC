#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    int l=0,r=0;
    set<int>st;
    int ans=0;

    while(l<n && r<n) {
        while(r<n && !st.count(arr[r])) {
            st.insert(arr[r]);
            ans=max(ans,r-l+1);
            r++;
        }
        while(r<n && st.count(arr[r])) {
            st.erase(arr[l]);
            l++;
        }
    }
    cout<<ans<<"\n";

    
    return 0;
}
