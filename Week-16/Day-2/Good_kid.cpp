#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        a[0]=a[0]+1;
        int product=1;
        for(int i=0;i<n;i++) {
            product*=a[i];
        }
        cout<<product<<"\n";
    }
    return 0;
}
