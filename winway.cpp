
#include <bits/stdc++.h>
#define ll long long int
const int mod = 998244353;
using namespace std;

ll fact(ll n); 
  
ll combi(ll n, ll r)  {return fact(n) / (fact(r) * fact(n - r)); }
  
ll fact(ll n) 
{ 
    ll res = 1; 
    for (auto i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll arr_ele[n];
        unordered_map<ll,ll> freq;
        for(auto i=0;i<n;i++){
            cin>>arr_ele[i];
        }

        ll q;
        cin>>q;
        while(q--){
            ll possible_combi=0;
            ll left_lim,right_lim;
            cin>>left_lim>>right_lim;

            for(auto i=left_lim-1;i<right_lim;i++) freq[arr_ele[i]]+=1;

            unordered_map<ll,ll>::iterator itr=freq.begin();
            ll xor_val_i=itr->second;
            for(itr=freq.begin()+1;itr!=freq.end();itr++) xor_val_i^=(itr->second);


            if(xor_val_i==0) cout<<"0"<<endl;
            else{
                ll msb=floor(log2(xor_val_i));
                for(itr=freq.begin();itr!=freq.end();itr++){
                    if(itr->second & (1<<msb)){
                        possible_combi=(possible_combi)%mod+(combi(itr->second,(itr->second ^ xor_val_i)))%mod;
                    }
                }
            }   
        }
        /* code */
    }
    
    return 0;
}