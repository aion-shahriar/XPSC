#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    
	    vector<int>arr(n);
	    for(int i=0;i<n;i++) cin>>arr[i];
	    
	    vector<int>bob;
	    
	    for(int i=0;i<n;i++) {
	        int left=-1, right=-1;
	        if(i-1>=0) left=abs(arr[i]-arr[i-1]);//left idx exists
	        if(i+1<n) right=abs(arr[i]-arr[i+1]);//right idx exists
	        
	        int tmp=max(right,left);
	        bob.push_back(tmp);
	    }
	    
	    int ans=*min_element(bob.begin(),bob.end());
	    cout<<ans<<"\n";
	}
	return 0;
}
