#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll len,n_e=0,n_o=0,pos;
    cin>>len;
    ll val[len];
    for(auto i=0;i<len;i++){
        cin>>val[i];
        if(val[i] & 1) n_o+=1;
        else n_e+=1;
    }
    if(n_o==1) for(auto i=0;i<len;i++){ if( val[i] & 1 ) {cout<<i+1; break;} }
    else for(auto i=0;i<len;i++) { if( !(val[i] & 1) ) {cout<<i+1; break;} }
    return 0;
}