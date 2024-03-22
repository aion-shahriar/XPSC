#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;
  
  while(t--) {
      int n;
      string s,s2;
      cin>>n;
      cin>>s>>s2;
      bool flag=true;
      for(int i=0;i<n ;i++) {
          if((s[i]==s2[i])||(s[i]=='G' && s2[i]=='B')||(s[i]=='B' && s2[i]=='G')) {
              continue;
          }
          else {
              cout<<"NO"<<"\n";
              flag=false;
              break;
          }
      }
      if(flag) cout<<"YES"<<"\n";
      
  }
  
  return 0;
}
