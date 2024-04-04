#include <bits/stdc++.h>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	while(t--) {
	    long long n,m,h;
	    cin>>n>>m>>h;
	    
	    vector<int>cars(n);
	    for(int i=0;i<n;i++) cin>>cars[i];
	    
	    vector<int>power(m);
	    for(int i=0;i<m;i++) cin>>power[i];
	    
	    sort(cars.begin(),cars.end(),greater<int>());
	    sort(power.begin(), power.end(), greater<int>());
	    
	    long long ans=0;
	    
	    long long x=min(n,m);
	    
	    for(int i=0;i<x;i++) {
	        long long tmp=power[i]*h;
	        if(tmp>cars[i]) {
	            ans+=cars[i];
	        }
	        else {
	            ans+=tmp;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;

}
