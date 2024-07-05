#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n,k; cin>>n>>k;
	    
	    vector<int>arr(n);
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    int ans=0;
	    
	    for(int i=0;i<n-k+1;i++) {
	        int x=0;
	        for(int j=i;j<i+k;j++) {
	            if(arr[j]%2==1) {
	                x=1;
	                break;
	            }
	        }
	        if(x==1) ans++;
	    }
	    cout<<ans<<"\n";
	}
	return 0;

}
