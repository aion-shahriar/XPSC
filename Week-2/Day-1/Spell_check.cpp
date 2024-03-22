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
      string s;
      cin>>n;
      cin>>s;
      
      
      if(s.size()!=5) {
          cout<<"NO"<<"\n";
      }
      else {
          sort(s.begin(),s.end());
          
          if(s=="Timru") {
             cout<<"YES"<<"\n";
          }
          else {
              cout<<"NO"<<"\n";
          }
      }
  }
  
  return 0;
}
