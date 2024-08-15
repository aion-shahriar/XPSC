#include <bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// template<typename T> using pbds = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
// //less<T> -> set
// //less_equal<T> -> multiset

#define ll long long
#define MOD 1000000007
#define PI 3.141592653589793238462
#define all(x) (x).begin(), (x).end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define optimize() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n';

string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
string to_unique(string a) {
    string result="";
    sort(a.begin(),a.end());
    int uq_sz=unique(a.begin(),a.end())-a.begin();
    for(int i=0;i<uq_sz;i++) {
        result+=a[i];
    }
    return result;
}

bool is_vowel(char ch) { return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');}

int string_to_int(string a) { return stoi(a); }
string int_to_string(int a) { return to_string(a); }

bool is_prime(ll a) { if (a<2) return 0; for (int i=2;i*i<=a;i++) if (a%i==0) return 0; return 1; }
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
void yes() {cout<<"YES\n";}
void no() {cout<<"NO\n";}

bool sort_by_second(const pair<ll,ll> &a, const pair<ll,ll> &b) {
    return a.second<b.second; //ascending
    //return a.second>b.second //descending
}

bool is_power_of_two(int num) {
    if (num == 0) return false;

    return (ceil(log2(num)) == floor(log2(num)));
}
int next_power_of_two(int x) {
    int cnt = 0;
    
    while(x>0){
        cnt++;
        x=x>>1;
    }
    return (1<<cnt);
    //power of 2 nums are 2,4,8,16,32
    //if 17 number is given it will return 32
}
int previous_power_of_two(int x) {
    if((x&&!(x&(x-1)))==1) {
        return x>>1;
    } 
    while(x&(x-1)) {
        x=x&(x-1);
    }
    return x;
}

bool binary_search(ll sz,vector<ll>num,ll target) {
    sort(all(num));
    bool ans=false;
    ll low=0,high=sz-1,mid;
    while(low<=high) {
        mid=(high+low)/2;
        if(num[mid]==target) {
            ans=true;
            break;
        }
        else if(num[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return ans;   
}

void solve() {
    int num; cin>>num;
    int x=previous_power_of_two(num);

    

    if(is_power_of_two(num)) {
        cout<<0<<" "<<num<<"\n";
    }
    else {
        cout<<num-x<<" "<<x<<"\n";
    }
    
    
}




vector<int>sieve_of_eratosthens(int n) {
    vector<int>sieve;
    vector<int>arr(n+1);
    //memset(arr,sizeof(arr),0);
    for(int i=0;i<=n;i++) arr[i]=0;
    for(int i=2;i<=n;i++) {
        if(arr[i]==0) {
            sieve.push_back(i);
        }
        for(int j=i*i;j<=n;j=j+i) {
            arr[j]=1;
        }
    }
    return sieve;
}
int main() {

    optimize();

    ll t; cin>>t;
    while(t--) {
        solve();
    }
    
    return 0;
}
