#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll row,colmn;
    cin>>row>>colmn;
    ll line_no=0,l_r=0;
    while (row--)
    {
        if(line_no==0){
            for(auto i=0;i<colmn;i++) cout<<"#";
            cout<<endl;
            line_no=1;
        }
        else{
            if(l_r==0){
             for(auto i=0;i<colmn-1;i++) cout<<"."; cout<<"#"<<endl; l_r=1; }
            else{
               cout<<"#"; for(auto i=0;i<colmn-1;i++) cout<<"."; cout<<endl; l_r=0;
            } 
            line_no=0;
        }
        /* code */
    }
    
    return 0;
}