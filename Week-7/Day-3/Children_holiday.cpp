#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int balloons,assistants; 
    cin>>balloons>>assistants;
    
    vector<tuple<int,int,int> >arr(assistants);

    for(int i=0;i<assistants;i++) {
        int t,z,y;
        cin>>t>>z>>y;
        arr[i]=make_tuple(t,z,y);
    }
    vector<int>can(assistants);

    auto ok=[&](int mid) {
        vector<int>may(assistants);
        int has=balloons;
        for(int i=0;i<assistants;i++) {
            tuple<int,int,int> T =arr[i];
            int t,z,y,total,remaining,can,curr;
            t=get<0>(T);
            z=get<1>(T);
            y=get<2>(T);

            total=((t*z)+y);
            can=mid/total;
            remaining=mid%total;
            curr=(can*z)+min(z,remaining/t);
            curr=min(curr,has);
            has=has-curr;
            may[i]=curr;
        }
        if(!has) {
            for(int i=0;i<assistants;i++) {
                can[i]=may[i];
            }
        }
        return (!has);
    };

    int l=0,r=1e9,mid,ans;
    while(l<=r) {
        mid=l+(r-l)/2;
        if(ok(mid)) {
            ans=mid;
            r=mid-1;
        }
        else {
            l=mid+1;
        }
    }
    cout<<ans<<"\n";

    for(int i=0;i<assistants;i++) {
        cout<<can[i]<<" ";
    }
    cout<<"\n";

    
    return 0;
}
