#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int num;
  cin>>num;
  
  int tmp=num;
  
  int cnt=0;
  
  while(tmp!=0) {
    tmp=tmp/10;
    cnt++;
  }
  // cout<<"cnt="<<cnt<<"\n";
  if(cnt==0) cout<<0<<0<<0<<0<<"\n"; 
  else if(cnt==1) cout<<0<<0<<0<<num<<"\n";
  else if(cnt==2) cout<<0<<0<<num<<"\n";
  else if(cnt==3) cout<<0<<num<<"\n";
  else if(cnt==4) cout<<num<<"\n";
  
  return 0;
}
