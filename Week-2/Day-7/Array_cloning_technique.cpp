#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        map<int,int>mp;
        int max_ocr=0;
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            mp[x]++;
            max_ocr=max(max_ocr,mp[x]);
        }

        int ans=0;
        
        while(max_ocr<n) {
            int remaining = n-max_ocr;
            int can_add=max_ocr;
            ans++;//for cloning
            ans=ans+min(remaining,can_add);//for_swapping
            max_ocr=max_ocr+min(remaining,can_add);
        }
        
        cout<<ans<<"\n";
    }

    return 0;
}
