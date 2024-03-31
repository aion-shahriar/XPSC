#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n,m; cin>>n>>m;
        int grid[n][m];
        int sum[n][m];

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cin>>grid[i][j];
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                int ci=i, cj=j;
                int cur=grid[i][j];
                sum[i][j]=0;
                while(ci<n && ci>=0 && cj>=0 && cj<m) {
                    sum[i][j]+=grid[ci][cj];
                    ci--;
                    cj++;
                }
                ci=i, cj=j;
                while(ci<n && ci>=0 && cj>=0 && cj<m) {
                    sum[i][j]+=grid[ci][cj];
                    ci++;
                    cj++;
                }
                ci=i,cj=j;
                while(ci<n && ci>=0 && cj>=0 && cj<m) {
                    sum[i][j]+=grid[ci][cj];
                    ci--;
                    cj--;
                }
                ci=i, cj=j;
                while(ci<n && ci>=0 && cj>=0 && cj<m) {
                    sum[i][j]+=grid[ci][cj];
                    ci++;
                    cj--;
                }

                sum[i][j]=sum[i][j]-(cur*3);
            }
        }
        int mx=INT_MIN;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                mx=max(mx,sum[i][j]);
            }
        }
        cout<<mx<<"\n";
    }

    
    return 0;
}
