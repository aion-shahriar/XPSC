#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a,b,c;
  cin>>a>>b>>c;
  int i;
  for(i=a;i<=b;i++) {
    if(i%c==0) {
      cout<<i<<"\n";
      break;
    }
  }
  if(i==b+1) cout<<-1<<"\n";
  
  
  return 0;
}
