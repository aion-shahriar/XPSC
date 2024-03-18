#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a,b;
  cin>>a>>b;
  
  int mx=max(a,b);
  
  int ans1=mx+(mx-1);
  int ans2=a+b;
  
  int final=max(ans1,ans2);
  
  cout<<final<<"\n";
  
  return 0;
}
