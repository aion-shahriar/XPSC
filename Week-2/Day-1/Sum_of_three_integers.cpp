#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll k,s;
  cin>>k>>s;
  ll cnt=0;
  ll c;
  for(int i=0;i<=k;i++) {
    for(int j=0;j<=k;j++) {
      c=s-(i+j);
      //cout<<i<<" "<<j<<" "<<c<<"\n";
      if(c>=0 && c<=k) {
        if(i+j+c==s) {
          cnt++;
        }
      }
      
    }
  }
  
  cout<<cnt<<"\n";
  
  return 0;
}
