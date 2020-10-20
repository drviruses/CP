/*
    @uthor: Amit Kumar
    user -->GitHub: drviruses ; CodeChef: dr_virus_ ; Codeforces,AtCoder,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll    long long
#define ld    long double
#define ull   unsigned long long
#define endl "\n"
#define all(vec) vec.begin(),vec.end()
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

bool mysort(pair<ll,ll>& a, pair<ll,ll>& b){
    return a.second > b.second;
}

void virus(){
          ll len, res = 0;
          cin>>len;
          unordered_map<ll,ll> cnt;
          vector<ll> arr(len);
          for(auto &i:arr){
              cin>>i;
              cnt[i]++;
          }
          if(len == 1){
              cout<<"2"<<endl;
              return;
          }
          vector<pair<ll,ll>> pr(all(cnt));
          sort(all(pr),mysort);
          ll mx = *max_element(all(arr));
          ll count = cnt[mx];
          auto isodd = [&](ll x){
              if(x  & 1) return true;
              return false;
          };
          auto modexp = [&](ll a, ll b){
              ll ans = 1;
              while(b != 0){
                  if(isodd(b)) ans = ((ans%mod) * (a%mod))%mod;
                  b >>= 1;
                  a = ((a) * (a))%mod;
              }
              return ans%mod;
          };
          auto modexpano = [&](ll x, ll y){
              ll fir = (x % mod);
              ll sec = modexp(y,mod - 2);
              return (fir*sec)%mod;
          };
          auto draw = [&](ll a, ll b){
              ll mn = min(b , a - b) ,res = 1;
              for(auto i=0; i<mn; i++){
                  res = ((res%mod) * (a - i)%mod)%mod;
                  res = modexpano(res, i + 1)%mod;
              }
              return res%mod;
          };
          if(isodd(count)) res = modexp(2ll,len);
          else{
              ll half = count/2;
              res += modexp(2ll,len);
              res -= ((modexp(2ll,len - count)) * (draw(count, half))) % mod;
          }
          cout<<(ll)((res + mod)%mod)<<endl;
}   


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ll t;
    cin>>t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
           //cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}