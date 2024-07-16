#include <bits/stdc++.h>
using namespace std;
bool is_Power_Of_Two(int num)
{
    if (num == 0) return false;

    return (ceil(log2(num)) == floor(log2(num)));
}
int next_Power_Of_2(int x) {
    int cnt = 0;
    
    while ( x > 0 ) {
        cnt++;
        x=x>>1;
    }
    return (1 << cnt) ;
}

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--) {
	    int n; cin>>n;
	    int ans;
	    if(is_Power_Of_Two(n)) {
	        ans=0;
	    }
	    else {
	        int next=next_Power_Of_2(n);
	        int big=next-n;
	        int small=n-big;
	        
	        ans=small;
	    }
	    cout<<ans<<"\n";
	    
	    //1-->2 -> big=0, small-2
	    //2---> 4 -> big-0, small-4
	    //3--> 6->big-2,small-4
	    //4---> 8 ->big-0, small-8
	    //5--->10-> big-6, small-4
	    //6--->12->big->4, small-8
	    //7--->14->big-2, small-12
	    //8---->16 ->big-0, small=16
	    //1,2,4,8,16,32,->0
	    //2,4,8,16,32
	}
	return 0;

}
