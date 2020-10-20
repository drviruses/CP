#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll c[26]={0};
    //memset(c,0,sizeof(ll));
    string patt;
    cin>>patt;
    for(auto i=0;i<patt.size();i++){
        if(patt[i]!=',' && patt[i]!='{' && patt[i]!='}' && patt[i]!=' ')
            c[patt[i]-97]+=1;
    }
    ll cnt=0;
    for(auto i=0;i<26;i++) {if(c[i]!=0) cnt+=1;}

    if(patt.size()==2) cout<<"0";
    else cout<<cnt;
    return 0;
}