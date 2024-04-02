#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;

        int arr[n][n-1];
        map<int,int>mp;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n-1;j++) {
                cin>>arr[i][j];
                if(j==n-2) {
                    mp[arr[i][j]]++;
                }
            }
        }
        int unique;
        int mx;
        for(auto it: mp) {
            if(it.second==1) {
                unique=it.first;
            }
            if(it.second!=1) {
                mx=it.first;
            }
        }
        int result_idx=0;
        for(int i=0;i<n;i++) {
            if(arr[i][n-2]==unique) {
                result_idx=i;
                break;
            }
        }
        for(int j=0;j<n-1;j++) {
            cout<<arr[result_idx][j]<<" ";
        }
        cout<<mx<<"\n";

    }

    return 0;
}
