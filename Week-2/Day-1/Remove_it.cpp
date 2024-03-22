#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n,x;
  cin>>n>>x;
  
  vector<ll>arr;
  
  for(int i=0;i<n;i++) {
    int tmp;
    cin>>tmp;
    if(tmp!=x) {
      arr.push_back(tmp);
    }
  }
   
  for(ll v : arr) {
    cout<<v<<" ";
  }
  cout<<"\n";
  
  return 0;
}
