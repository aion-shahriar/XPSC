#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        vector<int>athelete(n);
        vector<int>endurance(n);
        for(int i=0;i<n;i++) {
            cin>>athelete[i];
            cin>>endurance[i];
        }
        int w=athelete[0];
        bool ok=true;
        for(int i=1;i<n;i++) {
            if(athelete[i]>=athelete[0] && endurance[i]>=endurance[0]) {
                ok=false;
            }
        }
        if(ok) cout<<w<<"\n";
        else cout<<-1<<"\n";
        

        
    }

    
    return 0;
}
