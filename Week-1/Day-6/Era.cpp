#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        vector<int>arr(n);
        int mx_dif=INT_MIN;
        for(int i=0;i<n;i++) cin>>arr[i];
        int dif;

        for(int i=0;i<n;i++) {
            dif=arr[i]-i-1;
            mx_dif=max(dif,mx_dif);
            
        }
        cout<<mx_dif<<"\n";
    }

    return 0;
}
