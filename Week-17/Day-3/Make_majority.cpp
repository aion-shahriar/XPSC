#include <bits/stdc++.h>

using namespace std;

int main() {

	int t; cin>>t;
	while(t--) {
        int n; cin>>n;
        string s; cin>>s;

        int ans;
        if(n==1) {
            if(s[0]=='0') ans=0;
            else ans=1;
        }
        else if(s[0]=='1' && s[n-1]=='1') ans=1;
        else {
            int z=0,o=0;
            char prv='1';
            for(auto ch : s) {
                if(ch=='1') o++;
                if(ch=='0' && prv=='1') z++;

                prv=ch;
            }
            if(o>z) ans=1;
            else ans=0;
        }
        
        

        if(ans) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
	return 0;

}
