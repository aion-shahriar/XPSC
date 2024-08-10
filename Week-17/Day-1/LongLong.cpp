#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        long long sum=0;
        vector<int>arr;
        for(int i=0;i<n;i++) {
            int x; cin>>x;
            sum+=abs(x);
            if(x!=0) arr.push_back(x);
        }
        bool flag=false;
        int cnt=0;
        for(int i=0;i<arr.size();i++) {
            if(arr[i]<0 && flag==false) {
                flag=true;
                cnt+=1;
            }
            if(arr[i]>0) {
                flag=false;
            }
        }
        
        cout<<sum<<" "<<cnt<<"\n";

    }

    
    return 0;
}
