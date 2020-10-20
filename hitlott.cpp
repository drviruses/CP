#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll den_ar[5]={100,20,10,5,1};
    ll bnk_amt,no_dn=0;
    cin>>bnk_amt;

    for(auto i=0;i<5;i++){
        if(bnk_amt/den_ar[i] != 0){
            no_dn+=(bnk_amt/den_ar[i]);
            bnk_amt=(bnk_amt%den_ar[i]);
        }
    }
    cout<<no_dn;
    return 0;
}