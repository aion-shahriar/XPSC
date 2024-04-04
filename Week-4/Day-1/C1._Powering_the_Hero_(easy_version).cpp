#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while(t--) {
        int n; cin>>n;

        vector<int>cards(n);
        for(int i=0;i<n;i++) cin>>cards[i];

        priority_queue<int>bonus;

        long long ans=0;

        for(int i=0;i<n;i++) {
            if(cards[i]>0) {
                bonus.push(cards[i]);
            }
            else if(cards[i]==0) {
                if(!bonus.empty()) {
                    ans+=bonus.top();
                    bonus.pop();
                }

            }
        }
        cout<<ans<<"\n";
    }

    
    return 0;
}
