#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        string s,s2; cin>>s>>s2;
        char ans;
        if(s==s2) ans='=';
        else {
            if(s[s.size()-1]==s2[s2.size()-1] && s[s.size()-1]=='S') {
                if(s.size()>s2.size()) ans='<';
                else ans='>';
            }
            else if(s[s.size()-1]==s2[s2.size()-1] && s[s.size()-1]=='L') {
                if(s.size()>s2.size()) ans='>';
                else ans='<';
            }
            else if(s[s.size()-1]==s2[s2.size()-1] && s[s.size()-1]=='M') {
                if(s.size()>s2.size()) ans='>';
                else ans='<';
            }
            else if(s[s.size()-1]=='L' && s2[s2.size()-1]=='M') ans='>';
            else if(s[s.size()-1]=='M' && s2[s2.size()-1]=='L') ans='<';
            else if(s[s.size()-1]=='S' && s2[s2.size()-1]=='M') ans='<';
            else if(s[s.size()-1]=='M' && s2[s2.size()-1]=='S') ans='>';
            else if(s[s.size()-1]=='S' && s2[s2.size()-1]=='L') ans='<';
            else if(s[s.size()-1]=='L' && s2[s2.size()-1]=='S') ans='>';
        }
        cout<<ans<<endl;
    }

    
    return 0;
}
