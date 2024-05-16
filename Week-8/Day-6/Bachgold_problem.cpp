#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    if(n==3) {
        cout<<1<<'\n';
        cout<<3<<"\n";
    }

    else if(n%2==0) {
        int prime=n/2;
        cout<<prime<<"\n";
        for(int i=1;i<=prime;i++) {
            cout<<2<<" ";
        }
        cout<<"\n";
    }
    else {
        int two=(n-3)/2;

        cout<<two+1<<"\n";
        for(int i=1;i<=two;i++) {
            cout<<2<<" ";
        }
        cout<<3<<"\n";
    }

    
    return 0;
}
