
#include <bits/stdc++.h>
using namespace std;
#define ll  long long

vector<ll> zero(1e5+5,0), one(1e5+5,0);

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll arr_len;
    cin>>arr_len;
    vector<ll> myarr(arr_len);
    for(auto &i:myarr) cin>>i;
    ll mx = LLONG_MIN;
    for(auto i:myarr) mx = max(i,mx);
    ll mx_arr_len = log2(mx) + 1, act_ans = 0;
    for(auto i=0; i<arr_len; i++){
        ll temp = (__builtin_popcount(myarr[i]));
        one[i] = temp;
        zero[i] = (mx_arr_len - temp);
    }
    ll pwr = pow(2LL,arr_len);
    for(auto i=1; i<=pwr; i++){
        auto b = bitset<28>(i);
        ll cntone = 0, cntzero = 0;
        for(auto j=0; j<28; j++){
            if(b[j] == 1){
                cntone += one[j];
                cntzero += zero[j];
            }
        }
        if(cntone == cntzero)
            if(cntone != 0 and cntzero != 0) act_ans += 1;
    }
    auto final = bitset<28>(act_ans);
    string myfin = final.to_string();
    cout<<myfin.substr(28 - mx_arr_len);
    return 0;
}