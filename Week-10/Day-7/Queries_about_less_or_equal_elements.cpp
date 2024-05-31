#include <bits/stdc++.h>
#define ll long long

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

template<typename T> using pbds = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, n2; cin>>n>>n2;

  pbds<ll>p;
  vector<ll>arr(n);

  for(ll i=0;i<n;i++) {
    ll x;
    cin>>x;
    p.insert(x);
  }

  for(ll i=0;i<n2;i++) {
    ll x; cin>>x;
    ll y=p.order_of_key(x+1);
      
    cout<<y<<" ";
  }
  cout<<"\n";


  return 0;
}
