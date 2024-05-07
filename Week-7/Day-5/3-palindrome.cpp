#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    string res="";

    if(n%2==0) {
        int x=n/2;
        for(int i=0;i<x;i++) {
            if(i%2==0) {
                res+="aa";
            }
            else {
                res+="bb";
            }
        }
    }
    else {
        int x=n/2;
        for(int i=0;i<x;i++) {
            if(i%2==0) {
                res+="aa";
            }
            else {
                res+="bb";
            }
        }
        if(x%2==0) {
            res+='a';
        }
        else {
            res+='b';
        }
    }
    cout<<res<<"\n";
    return 0;
}
