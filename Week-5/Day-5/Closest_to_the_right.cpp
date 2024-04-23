#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    

    while(k--) {
        int key; cin>>key;
        int l=0,r=n-1,ans=n,mid;
        while(l<=r) {
            mid=r-(r-l)/2;
            if(key<=arr[mid]) {
                ans=mid;
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        cout<<ans+1<<"\n";
    }

    
    return 0;
}
