#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a,b,t;
  cin>>a>>b>>t;
  
  int time=t/a;
  int ans=time*b;

  cout<<ans<<"\n";
  
  return 0;
}
