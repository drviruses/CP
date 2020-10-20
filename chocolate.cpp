#include<bits/stdc++.h>
#define ll long long
const int mod=1e9+7;
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

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll no_choco,sum=0;
    
    cin>>no_choco;
    ll patt=int(no_choco/3);
    ll t=patt;
    while (t--){
        sum+=combi((patt+(no_choco-(patt*3))),patt)%mod;
        patt-=1;
    }
    cout<<sum+1%mod;
    
    return 0;
}