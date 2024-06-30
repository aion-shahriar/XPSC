#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;

        int cost=0;
        int n=s.size();

        int zero=0, one=0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='0') zero++;
            else one++;
        }


        if(n==1) cost=1;
        else if(zero==one) cost=0;
        else {
            for(int i=0;i<n;i++) {
                if(s[i]=='1') {
                    if(zero>0) {
                        zero--;
                    }
                    else {
                        break;
                    }
                }
                else {
                    if(one>0) {
                        one--;
                    }
                    else {
                        break;
                    }
                }
            }
            cost=zero+one;
        }
        
        cout<<cost<<"\n";
        
    }

    
    return 0;
}
