#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        stack<char>st;
        for(int i=0;i<n;i++) {
            char ch=s[i];
            if(ch=='(') {
                st.push(ch);
            }
            else {
                if(st.empty()) {
                    st.push(ch);
                }
                else if(ch==')' && st.top()=='(') {
                    st.pop();
                }
                else {
                    st.push(ch);
                }
            }
        }
        cout<<st.size()/2<<"\n";
    }

    
    return 0;
}
