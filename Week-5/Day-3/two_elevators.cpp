#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        if(a==1) {
            ans=1;
        }
        if(a==1 && b==1 && c==1) {
            ans=3;
        }
        else {
            int tmp_a=a-1;
            int tmp_b;
            if(c==1) {
                tmp_b=abs(b-c);
            }
            else {
                tmp_b=abs(b-c)+c-1;
            }

            if(tmp_a==tmp_b) ans=3;
            else if(tmp_a<tmp_b) ans=1;
            else ans=2;
        }
        cout<<ans<<"\n";
    }

    
    return 0;
}
