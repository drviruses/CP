
#include <bits/stdc++.h>
using namespace std;
#define ll    long long


void virus(){
       ll len,x;
       cin>>len>>x;
       vector<ll> arr(len);
       for(auto &i:arr) cin>>i;
       if(x>=arr[0]) cout<<len<<endl;
       else{
           ll cnt = 0, nn = arr[0];
           while(x < nn){
               cnt+=1;
               x*=2, nn*=2;
           }
           cout<<cnt+len<<endl;
       }
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll t;
    cin>>t;
    while(t--){
           virus();
        //your code goes here
    }
    return 0;
}