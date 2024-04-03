#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>arr(n);
        map<int,int>mp;
        for(int i=0;i<n;i++) cin>>arr[i];
        int cnt=1;
        for(int i=n-1;i>=0;i--) {
            if(i==n-1) {
                mp[arr[i]]++;
            }
            else {
                if(mp[arr[i]]>0) {
                    break;
                }
                else {
                    mp[arr[i]]++;
                    cnt++;
                }
            }

        }
        cout<<n-cnt<<"\n";
    }

    
    return 0;
}
