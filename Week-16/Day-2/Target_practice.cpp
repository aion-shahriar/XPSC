#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        char a[10][10];
        int point=0;
        for(int i=0;i<10;i++) {
            for(int j=0;j<10;j++) {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<10;i++) {
            if(a[0][i]=='X') {
                point=point+1;
            }
            if(a[9][i]=='X') {
                point=point+1;
            }   
        }
        for(int i=1;i<9;i++) {
            if(a[i][0]=='X') {
                point=point+1;
            }
            if(a[i][9]=='X') {
                point=point+1;
            }
        }


        for(int i=1;i<9;i++) {
            if(a[1][i]=='X') {
                point=point+2;
            }
            if(a[8][i]=='X') {
                point=point+2;
            }
        }
        for(int i=2;i<8;i++) {
            if(a[i][1]=='X') {
                point=point+2;
            }
            if(a[i][8]=='X') {
                point=point+2;
            }
        }


        for(int i=2;i<8;i++) {
            if(a[2][i]=='X') {
                point=point+3;
            }
            if(a[7][i]=='X') {
                point=point+3;
            }
        }
        for(int i=3;i<7;i++) {
            if(a[i][2]=='X') {
                point=point+3;
            }
            if(a[i][7]=='X') {
                point=point+3;
            }
        }

        for(int i=3;i<7;i++) {
            if(a[3][i]=='X') {
                point=point+4;
            }
            if(a[6][i]=='X') {
                point=point+4;
            }
        }
        for(int i=4;i<6;i++) {
            if(a[i][3]=='X') {
                point=point+4;
            }
            if(a[i][6]=='X') {
                point=point+4;
            }
        }

        if(a[4][4]=='X') {
            point=point+5;
        }
        if(a[4][5]=='X') {
            point=point+5;
        }
        if(a[5][4]=='X') {
            point=point+5;
        }
        if(a[5][5]=='X') {
            point=point+5;
        }

        cout<<point<<endl;


    }

    return 0;
}
