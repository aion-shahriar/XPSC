#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n;
	    cin>>n;
	    int Xor=0;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++) {
	        cin>>arr[i];
	        Xor=Xor^arr[i];
	    }
	    
	    int ans=Xor;
	    for(int i=0;i<n;i++) {
	        int ans2=Xor^arr[i];
	        ans=min(ans,ans2);
	    }
	    cout<<ans<<"\n";
	  
	}
	return 0;

}
