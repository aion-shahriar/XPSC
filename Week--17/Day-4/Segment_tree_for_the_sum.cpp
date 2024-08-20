#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int maxN=1e5+10;
ll a[maxN], t[4*maxN];


void build(int n,int b,int e) {
    //O(n)
    if(b==e) {
        t[n]=a[b];
        return;
    }
    int mid=(b+e)/2;
    int l=2*n, r=(2*n)+1;

    build(l,b,mid);
    build(r,mid+1,e);

    t[n]=t[l]+t[r];
}

void update(int n,int b,int e,int i,int v) {
    //O(logn)
    if(i<b || i>e) return;
    if(b==e) {
        t[n]=v;
        return;
    }
    
    int mid=(b+e)/2;
    int l=2*n, r=(2*n)+1;

    update(l,b,mid,i,v);
    update(r,mid+1,e,i,v);

    t[n]=t[l]+t[r];
}

ll query(int n,int b,int e,int i,int j) {
    //O(logn)
    if(e<i || j<b) return 0;
    if(b>=i && e<=j) return t[n];

    int mid=(b+e)/2;
    int l=2*n, r=(2*n)+1;

    return query(l,b,mid,i,j)+query(r,mid+1,e,i,j);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];

    build(1,1,n);

    while(m--) {
        int q; cin>>q;

        if(q==1) {
            int i,v; cin>>i>>v;
            i++;
            update(1,1,n,i,v);
        }
        else {
            int l,r; cin>>l>>r;
            l++;
            ll ans=query(1,1,n,l,r);
            cout<<ans<<"\n";
        }
    }

    
        
    return 0;
}
