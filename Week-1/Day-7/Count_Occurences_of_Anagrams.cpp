class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int freq1[26]={0};
	    int freq2[26]={0};
	    
	    for(char c: pat) {
	        freq1[c-'a']++;
	    }
	    
	    int window=pat.size();
	    int l=0,r=0;
	    int n=txt.size();
	    
	    int cnt=0;
	    
	    while(r<n) {
	        freq2[txt[r]-'a']++;
	        if(r<window-1) {
	            r++;
	        }
	        else {
	            bool flag=true;
	            for(int v=0;v<26;v++) {
	                if(freq1[v]!=freq2[v]) {
	                    flag=false;
	                    break;
	                }
	            }
	            if(flag) cnt++;
                freq2[txt[l]-'a']--;
                l++;
                r++;
	        }
	    }
	    return cnt;
	}

};
