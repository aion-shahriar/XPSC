#include <bits/stdc++.h>
#define ll long long
using namespace std;
bool sort_by_second(const pair<ll,ll> &a, const pair<ll,ll> &b) {
    return a.second<b.second; //ascending
    //return a.second>b.second //descending
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n, k; cin>>n>>k;
        vector<int>b(n);
        vector< pair<int,int> >a(n);
        for(int day=0;day<n;day++) {
            int tmp; cin>>tmp;
            a[day].first=tmp;
            a[day].second=day;
        }
        sort(a.begin(),a.end());

        for(int i=0;i<n;i++) {
            cin>>b[i];
        }
        sort(b.begin(),b.end());

        vector<int>ans(n);

        for(int i=0;i<n;i++) {
            ans[a[i].second]=b[i];
        }
        
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";

        cout<<"\n"; 
    }
    return 0;
}
