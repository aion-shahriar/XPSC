#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    string s; cin>>s;
	    
	    int zero=0, one=0;
	    
	    for(int i=0;i<n;i++) {
	        (s[i]=='0')?zero++:one++;
	    }
	    int min_pairs=min(zero,one);
	    
	    string ans="";
	    ans=(min_pairs%2==0)?"Ramos":"Zlatan";
	    cout<<ans<<"\n";
	}
  return 0;

}
