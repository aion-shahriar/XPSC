#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        set<int>st;
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            st.insert(x);
        }
        if((n-st.size())%2==0) {
            cout<<st.size()<<"\n";
        }
        else {
            cout<<st.size()-1<<"\n";
        }
    }
    return 0;
}
