#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--) {
	    int n; cin>>n;
	    int tmp=n;
	    if(n%2==0) {
	        for(int i=1;i<=(n/2);i++) {
	            cout<<i<<" "<<tmp-i+1<<" ";
	        }
	    }
	    else {
	        for(int i=1;i<=(n/2);i++) {
	            cout<<i<<" "<<tmp-i<<" ";
	        }
	        cout<<n;
	    }
	    cout<<"\n";
	}
	return 0;

}
