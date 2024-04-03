#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n,l,r;
	    cin>>n>>l>>r;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++) cin>>arr[i];
	    int happy=0;
	    int mn=INT_MAX;
	    int mx=INT_MIN;
	    for(int i=0;i<n;i++) {
	        
	        if(arr[i]>=l && arr[i]<=r) {
	            mn=min(mn,happy);
	            mx=max(mx,happy);
	            happy+=1;
	        }
	        else {
	            mn=min(mn,happy);
	            mx=max(mx,happy);
	            happy-=1;
	        }
	        mn=min(mn,happy);
	        mx=max(mx,happy);
	    }
	    cout<<mx<<" "<<mn<<"\n";
	}
	return 0;

}
