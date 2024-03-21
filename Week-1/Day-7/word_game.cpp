#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        map<string,int>mp;
        map<int, vector<string> >mmp;

        int n;
        cin>>n;

        for(int i=0;i<3;i++) {
            for(int j=0;j<n;j++) {
                string s;
                cin>>s;
                mmp[i].push_back(s);
                mp[s]++;
            }
        }
        for(int i=0;i<3;i++) {
            int point=0;
            for(string s : mmp[i]) {
                if(mp[s]==1) {
                    point+=3;
                }
                else if(mp[s]==2) {
                    point+=1;
                }
            }
            cout<<point<<" ";
        }
        cout<<"\n";

    }

    
    return 0;
}
