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

        int cnt=0;

        for(int i=0;i<n;i++) {
            if(arr[i]==1) cnt++;
        }

        int spell2=n-cnt;

        int spell1=0;
        if(cnt>0) {
            if(cnt%2==0) {
                spell1+=cnt/2;
            }
            else {
                spell1+=cnt/2+1;
            }
        }
        int res=spell1+spell2;
        cout<<res<<"\n";
    }

    
    return 0;
}
        

    



    
