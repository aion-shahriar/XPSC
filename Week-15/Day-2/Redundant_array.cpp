#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
    	int n; cin>>n;
    	
    	vector<ll>arr(n);
    	map<ll,ll>mp;
    	for(int i=0;i<n;i++) {
    	    cin>>arr[i];
    	    mp[arr[i]]++;
    	}
    	
    	ll ans=n;
    	
    	for(auto [idx,val] : mp) {
    	    ll x=(n-val)*idx;
    	    ans=min(ans,x);
    	}
    	cout<<ans<<"\n";
	
	}
	return 0;
	
	

}
