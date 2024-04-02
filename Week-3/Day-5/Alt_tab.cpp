#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<string>arr(n);
	map<string,int>mp;
	for(int i=0;i<n;i++) {
	    cin>>arr[i];
	}
	
	
	for(int i=n-1;i>=0;i--) {
	    if(i==n-1) {
	        cout<<arr[i][arr[i].size()-2]<<arr[i][arr[i].size()-1];
	        mp[arr[i]]++;
	    }
	    else if(mp[arr[i]]==0) {
	        cout<<arr[i][arr[i].size()-2]<<arr[i][arr[i].size()-1];
	        mp[arr[i]]++;
	    }
	}
	cout<<"\n";

}
