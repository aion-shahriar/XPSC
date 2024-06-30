
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int sz=s.size();

    int freq[26]={0};

    for(int i=0;i<sz;i++) {
        freq[s[i]-'A']++;
    }

    bool ok=true;

    if(sz%2==0) {
        for(int i=0;i<26;i++) {
            if(freq[i]%2!=0) {
                ok=false;
                break;
            }
        }
    }
    else {
        int cnt=0;
        for(int i=0;i<26;i++) {
            if(freq[i]>0 && freq[i]%2!=0) {
                cnt++;
            }
        }
        if(cnt!=1) {
            ok=false;
        }
    }
    if(!ok) {
        cout<<"NO SOLUTION"<<"\n";
    }
    else {
        if(sz%2==0) {
            for(int i=0;i<26;i++) {
                if(freq[i]>0) {
                    int mid=freq[i]/2;
                    while(mid--) {
                        cout<<char(i+65);
                    }
                }
            }
            for(int i=25;i>=0;i--) {
                if(freq[i]>0) {
                    int mid=freq[i]/2;
                    while(mid--) {
                        cout<<char(i+65);
                    }
                }
            }
            cout<<"\n";
        }
        else {
            for(int i=0;i<26;i++) {
                if(freq[i]>0 && freq[i]%2==0) {
                    int mid=freq[i]/2;
                    while(mid--) {
                        cout<<char(i+65);
                    }
                }
            }
            for(int i=0;i<26;i++) {
                if(freq[i]>0 && freq[i]%2!=0) {
                    int doo=freq[i];
                    while(doo--) {
                        cout<<char(i+65);
                    }
                }
            }
            for(int i=25;i>=0;i--) {
                if(freq[i]>0 && freq[i]%2==0) {
                    int mid=freq[i]/2;
                    while(mid--) {
                        cout<<char(i+65);
                    }
                }
            }
            cout<<"\n";
        }
    }

    
    return 0;
}
