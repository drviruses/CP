#include<bits/stdc++.h>
#define _CRT_SECURE_NO_DEPRECATE
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll row,colmn,flag=1;
    cin>>row>>colmn;

    char strw[row][colmn];
    ll row_s=row,col_s=colmn;

    for(auto i=0;i<row;i++){
        flag=1;
        for(auto j=0;j<colmn;j++){
            cin>>strw[i][j];
            if(strw[i][j]=='S' && flag==1) {row_s-=1; flag=0;}
        }
    }


    ll flag_1=1;
    for(auto i=0;i<colmn;i++){
        flag_1=1;
        for(auto j=0;j<row;j++){ 
            if(strw[j][i]=='S' && flag_1==1) {col_s-=1;  flag_1=0;}
        }
    }

    //cout<<row_s<<" "<<col_s<<endl;
    if(row_s==row && col_s==colmn) cout<<row*colmn;
    else
    cout<<(row_s*colmn)+(col_s*row)-(col_s*row_s);
    return 0;
}