#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;

    map<int,int>diff;
    for(int i=1;i<=n;i++) {
        int a,b;
        cin>>a>>b;
        diff[a]++;
        diff[b+1]--;
    }
    int sum=0;
    int ans=INT_MIN;
    for(auto [idx,value] : diff) {
        sum+=value;
        //cout<<"val: "<<value<<"\n";
        ans=max(ans,sum);
    }
    cout<<ans<<"\n";

    
    return 0;
}
