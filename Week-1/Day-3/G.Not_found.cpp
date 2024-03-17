#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  cin>>s;
  
  set<char>st;
  
  for(char ch:s) {
    st.insert(ch);
  }
  string arr="abcdefghijklmnopqrstuvwxyz";
  vector<int>check(st.size());
  int i=0;
  for(auto it: st) {
    check[i++]=it;
  }
  sort(check.begin(),check.end());
  if(st.size()==26) cout<<"None"<<"\n";
  else {
    for(int i=0;i<26;i++) {
      if(check[i]!=arr[i]) {
        cout<<arr[i];
        break;
      }
    }
  }
  
  return 0;
}
