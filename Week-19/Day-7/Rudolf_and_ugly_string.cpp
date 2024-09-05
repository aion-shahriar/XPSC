#include <bits/stdc++.h>
#define ll long long
const int maxN=1e6+10;
bool visited[maxN]={false};

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        int map=0, pie=0;
        for(int i=1;i<n;i++) {
            if(s[i]=='a' && s[i-1]=='m' && s[i+1]=='p' && !visited[i] && !visited[i-1] && !visited[i+1]) {
                map++;
                visited[i]=true;
                visited[i-1]=true;
                visited[i+1] =true;
                
            }
            if(s[i]=='i' && s[i-1]=='p' && s[i+1]=='e' && !visited[i] && !visited[i-1] && !visited[i+1]) {
                pie++;
                visited[i]=true;
                visited[i-1]=true;
                visited[i+1] =true;
                
            }
        }
        cout<<map+pie<<"\n";
        memset(visited, false, sizeof(visited));
    }
    return 0;
}
