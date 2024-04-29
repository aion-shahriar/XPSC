#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;

    vector<int>arr(m+1);
    for(int i=0;i<=m;i++) cin>>arr[i];

    vector<vector<int> >all_mask;
    for(int mask=0;mask<=m;mask++) {
        vector<int>v;
        for(int k=0;k<n;k++) {
            if((arr[mask]>>k)&1) v.push_back(1);
            else v.push_back(0);
        }
        all_mask.push_back(v);
    }

    int result=0;

    vector<int>fedor_mask=all_mask[m];

    for(int i=0;i<all_mask.size()-1;i++) {
        vector<int>vec=all_mask[i];

        int cnt=0;
        for(int j=0;j<n;j++) {
            if(fedor_mask[j]!=vec[j]) cnt++;
        }
        if(cnt<=k) result++;
    }
    cout<<result<<"\n";


    
    return 0;
}
