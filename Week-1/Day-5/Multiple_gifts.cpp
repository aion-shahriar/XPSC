#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  long long x,y;
  cin>>x>>y;
  
  long long tmp=x;
  long long cnt=0;
  while(tmp<=y) {
    tmp=tmp*2;
    cnt++;
  }
  cout<<cnt<<"\n";
  
  return 0;
}
