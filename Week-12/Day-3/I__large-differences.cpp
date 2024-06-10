#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long t; cin>>t;
	while(t--) {
	    long long n,k; cin>>n>>k;
	    vector<long long>arr(n);
	    for(int i=0;i<n;i++) cin>>arr[i];
	    long long ans1=INT_MIN;
	    long long dif1=0;
	    for(int i=0;i<n;i++) {
	        vector<long long>tmp=arr;
	        tmp[i]=1;
	        dif1=0;
	        for(int j=0;j<n-1;j++) {
	            dif1+=abs(tmp[j]-tmp[j+1]);
	        }
	        ans1=max(ans1,dif1);
	    }
	    long long ans2=INT_MIN;
	    long long dif2=0;
	    for(int i=0;i<n;i++) {
	        vector<long long>tmp=arr;
	        tmp[i]=k;
	        dif2=0;
	        for(int j=0;j<n-1;j++) {
	            dif2+=abs(tmp[j]-tmp[j+1]);
	        }
	        ans2=max(ans2,dif2);
	    }
	    long long final=max(ans1,ans2);
	    
	    cout<<final<<"\n";
	    
	    
	    
	}
	return 0;

}
