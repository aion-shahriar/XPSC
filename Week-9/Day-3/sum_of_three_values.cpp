#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,k;
    cin>>n>>k;

    vector< pair<long long,long long> >arr(n);
    for(long long i=0;i<n;i++) {
        long long val;cin>>val;
        arr[i].first=val;
        arr[i].second=i+1;
    }
    sort(arr.begin(),arr.end());

    bool ok=false;
    for(long long i=0;i<n-2;i++) {
        long long ptr2=i+1;
        long long ptr3=n-1;
        while(ptr2<ptr3) {
            long long cur_sum=arr[i].first+arr[ptr2].first+arr[ptr3].first;

            if(cur_sum==k) {
                cout<<arr[i].second<<" "<<arr[ptr2].second<<" "<<arr[ptr3].second<<"\n";
                ok=true;
                break;
            }
            else if(cur_sum<k) ptr2++;
            else ptr3--;
        }
        if(ok) break;
    }
    if(!ok) cout<<"IMPOSSIBLE"<<"\n";



    
    return 0;
}
