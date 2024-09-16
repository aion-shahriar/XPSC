#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        int intro,extro,uni;
        cin>>intro>>extro>>uni;

        int cnt=0;

        cnt+=intro;

        int x=extro%3;

        if(x==0) {
            cnt+=extro/3;
            int v=uni/3;
            int r=uni%3;

            cnt+=v;
            if(r!=0) {
                cnt++;
            }

        }
        else if(x==1 && uni<2) {
            cnt=-1;
        }
        else if(x==1 && uni>=2) {
            
            cnt+=extro/3;
            cnt++;
            uni=uni-2;
            int v=uni/3;
            int r=uni%3;

            cnt+=v;
            if(r!=0) {
                cnt++;
            }
        }
        else if(x==2 && uni<1) {
            cnt=-1;
        }
        else if(x==2 && uni>=1) {
        
            cnt+=extro/3;
            cnt+=1;
            uni=uni-1;

            int v=uni/3;
            int r=uni%3;

            cnt+=v;
            if(r!=0) {
                cnt++;
            }

        }

        cout<<cnt<<"\n";



    }

    
    return 0;
}
