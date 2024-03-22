#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;
  
  while(t--) {
      int n; cin>>n; vector<int>arr(n);
      for(int i=0;i<n;i++) cin>>arr[i];
      for(int i=0;i<n;i++) {
          int op;
          string s;
          cin>>op>>s;
          for(int j=0;j<op;j++) {
              if(s[j]=='U') {
                  if(arr[i]==0) arr[i]=9;
                  else arr[i]--;
              }
              else if(s[j]=='D') {
                  if(arr[i]==9) arr[i]=0;
                  else arr[i]++;
              }
          }
      }
      for(int i=0;i<n;i++) cout<<arr[i]<<" ";
      cout<<"\n";
      
  }
  
  return 0;
}
