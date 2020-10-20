
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
#define ll    int
#define endl "\n"

void virus(){
          ll a, b;
          cin >> a >> b;
          auto modexp = [&](ll a, ll b){
              if(a == 0 and b == 0) return 0;
              ll ans = 1;
              while(b){
                  if(b&1) ans *= a;
                  a *= a;
                  b >>= 1;
                  a %= 10;
                  ans %= 10;
                  if(ans == 0) break;
              }
              return ans;
          };
          cout<<modexp(a%10,b)<<endl;
}

int32_t main(){
    ll t;
    cin>>t;
    while(t--){
           virus();
    }
    return 0;
}