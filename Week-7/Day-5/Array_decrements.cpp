#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        
        string res="";
        int dif=INT_MAX;

        for(int i=0;i<n;i++) {
            if(b[i]!=0) {
                dif=min(dif,a[i]-b[i]);
            }
        }
        if(dif<0) {
            res="NO";
        }
        else {
            int i;
            for(i=0;i<n;i++) {
                if(a[i]-b[i]>dif) {
                    res="NO";
                    break;
                }
                if(b[i]!=0 && a[i]-b[i]<dif) {
                    res="NO";
                    break;
                }
            }
            if(i==n) res="YES";
            
        }
        cout<<res<<"\n";
    }


    
    return 0;
}
