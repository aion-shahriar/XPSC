#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int i=n-1, last=arr[n-1], cnt=0, ans=0;
        while(i>=0) {
            while(arr[i]==last && i>=0) {
                cnt++;
                i--;
            }
            if(i<0) break;
            ans++;
            i=i-cnt;
            cnt=cnt*2;
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}
