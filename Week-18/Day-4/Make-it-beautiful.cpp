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

        if(arr[0]==arr[n-1]) cout<<"NO"<<"\n";
        else {
            cout<<"YES"<<"\n";
            cout<<arr[n-1]<<" "<<arr[0]<<" ";
            for(int i=1;i<n-1;i++) cout<<arr[i]<<" ";
            cout<<"\n";
        }
    }

    return 0;
}
