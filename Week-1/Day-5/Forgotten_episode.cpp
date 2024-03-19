#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    vector<int>arr(n-1);
  
    for(int i=0;i<n-1;i++) cin>>arr[i];
    
    sort(arr.begin(),arr.end());
  
    int i;
    for(i=0;i<n-1;i++) {
        if(arr[i]!=i+1) {
            cout<<i+1<<"\n";
            break;
        }
    }
    if(i==n-1) cout<<n<<"\n";
  
    return 0;
}
