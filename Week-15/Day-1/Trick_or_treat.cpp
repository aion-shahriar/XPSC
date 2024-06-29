#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n,m;
	    cin>>n>>m;
	    
	    vector<int>candy(n);
	    vector<int>choco(n);
	    
	    for(int i=0;i<n;i++) cin>>candy[i];
	    for(int i=0;i<n;i++) cin>>choco[i];
	    
	    map<ll,ll>mp;
	    
	    for(int i=0;i<n;i++) {
	        ll rem=candy[i]%m;
	        mp[rem]++;
	    }
	    
	    ll ans=0;
	    
	    for(int i=0;i<n;i++) {
	        if(choco[i]%m==0) {
	            if(mp[0]) {
	                ans+=mp[0];
	            }
	        }
	        else {
	            ll tmp=choco[i]%m;
	            
	            if(mp[m-tmp]) {
	                ans+=mp[m-tmp];
	            }
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;

}
