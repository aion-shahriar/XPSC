#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--) {
	    string s;
	    cin>>s;
	    
	    int l=s[0]-'0';
	    int r=s[1]-'0';
	    int u=s[2]-'0';
	    int d=s[3]-'0';
	    
	    int ans=1;
	    
	    if(l+r+u+d==0) cout<<ans<<"\n";
	    else if(l+r+u+d==4) cout<<ans+440<<"\n";
	    else if(l+r+u+d==1) cout<<ans+10<<"\n";
	    else if(l+r+u+d==2) {
	        if(u==1 && d==1) cout<<ans+20<<"\n";
	        else if(l==1 && r==1) cout<<ans+20<<"\n";
	        else cout<<ans+120<<"\n";
	    }
	    else if(l+r+u+d==3) {
	        cout<<ans+230<<"\n";
	    }
	}
	return 0;
}
