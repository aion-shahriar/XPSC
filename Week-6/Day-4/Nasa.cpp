#include <bits/stdc++.h>
using namespace std;

const int maxN=(1<<15);
vector<int>all_palindromes;

void palindromes() {
    for(int i=0;i<maxN;i++) {
        string s=to_string(i);
        int len=s.length();
        bool ok=true;
        
        for(int j=0;j<(len/2);j++) {
            if(s[j]!=s[len-j-1]) {
                ok=false;
                break;
            }
        }
        if(ok) all_palindromes.push_back(i);
    }
}

int main() {
	
	palindromes();
  
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    vector<int>cnt(maxN);
	    vector<int>arr;
	    for(int i=0;i<n;i++) {
	        int x; cin>>x;
	        cnt[x]++;
	        arr.push_back(x);
	    }
	    long long ans=n;
	    for(int i=0;i<n;i++) {
	        for(int j=0;j<all_palindromes.size();j++) {
	            int curr=arr[i]^all_palindromes[j];
	            ans=ans+cnt[curr];
	        }
	    }
	    cout<<ans/2<<"\n";
	}
	return 0;

}
