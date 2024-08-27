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

        int even=0,odd=0;
        for(int i=0;i<n;i++) {
            if(arr[i]%2==0) even++;
            else odd++;
        }
        //cout<<"e="<<even<<"o="<<odd<<"\n";
        if(odd>=3) {
            cout<<"YES"<<"\n";
            int cnt=0;
            for(int i=0;i<n;i++) {
                if(arr[i]%2==1 && cnt<3) {
                    cout<<i+1<<" ";
                    cnt++;
                }
                else {
                    continue;
                }
                
                
            }
            cout<<"\n";
        }
        else if(odd>=1 && even>=2) {
            cout<<"YES"<<"\n";
            int cnt=0;
            for(int i=0;i<n;i++) {
                if(arr[i]%2==0 && cnt<2) {
                    cout<<i+1<<" ";
                    cnt++;
                }
                else {
                    continue;
                }
            }
            for(int i=0;i<n;i++) {
                if(arr[i]%2==1) {
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
        else cout<<"NO"<<"\n";
    }

    
    return 0;
}
