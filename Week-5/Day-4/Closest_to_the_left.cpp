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
        int key;
        cin>>key;

        auto it=upper_bound(arr.begin(),arr.end(),key);
        cout<<it-arr.begin()<<"\n";
    }
    return 0;
}
