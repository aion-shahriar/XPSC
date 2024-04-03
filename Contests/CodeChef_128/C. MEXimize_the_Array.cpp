#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++) cin>>arr[i];
	    sort(arr.begin(),arr.end());
	    long long ans=0;
	    for(int i=0;i<n;i++) {
	        ans=ans+abs(i-arr[i]);
	    }
	    cout<<ans<<"\n";
	    
	}
	return 0;
}
