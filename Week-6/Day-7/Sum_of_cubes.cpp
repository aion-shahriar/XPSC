#include <bits/stdc++.h>
using namespace std;
const int MaxN=1e4+9;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    vector<long long>arr;
    for(long long i=1;i<=MaxN;i++) {
            long long y=pow(i,3);
            arr.push_back(y);
    }
    int t; cin>>t;
    while(t--) {
        long long x;
        cin>>x;
        bool found=false;
        for(long long i=0;i<MaxN;i++) {
            if(arr[i]>=x) break;
        
            int l=0,r=MaxN-1,mid;
            long long need=x-arr[i];
            bool ok=false;
            while(l<=r) {
                mid=l+(r-l)/2;
                if(arr[mid]==need) {
                    ok=true;
                    break;
                }
                else if(arr[mid]>need) {
                    r=mid-1;
                }
                else {
                    l=mid+1;
                }
            }
            if(ok) {
                found=true;
                break;
            }
        }
        if(found) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
        

    }

    
    return 0;
}
