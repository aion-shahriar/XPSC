#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,q;
    cin>>n>>k>>q;

    vector<int>arr(N);

    for(int i=0;i<n;i++) {
        int l,r; cin>>l>>r;
        arr[l]++;
        arr[r+1]--;
    }
    
    for(int i=1;i<N;i++) {
        arr[i]=arr[i]+arr[i-1];
    }

    vector<int>ans(N);

    for(int i=0;i<N;i++) {
        if(arr[i]>=k) {
            ans[i]=1;
        }
    }
    for(int i=1;i<N;i++) {
        ans[i]=ans[i]+ans[i-1];
    }
    

    for(int i=1;i<=q;i++) {
        int a,b; cin>>a>>b;

        int res=ans[b]-ans[a-1];
        cout<<res<<"\n";


    }
    return 0;
}
