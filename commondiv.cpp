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
#define all(vec) vec.begin(),vec.end()
#define endl "\n"
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;


void virus(){
          ll len, gcd = 0;
          cin >> len;
          for(auto i=0; i<len; i++){
              ll temp;
              cin >> temp;
              gcd = __gcd(gcd, temp);
          }
          if(gcd == 1){
              cout<<1; return;
          }
          ll ans = 1, cnt = 0;
          while(gcd%2 == 0){
              cnt++; gcd >>= 1;
          }
          if(cnt != 0) ans *= (cnt+1);
          cnt =0;
          for(auto i=3; i <= sqrt(gcd); i += 2){
              cnt = 0;
              while(gcd%i == 0){
                  cnt++, gcd /= i;
              }
              if(cnt) ans *= (cnt+1);
          }
          if(gcd > 2) ans <<= 1;
          cout<<ans;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ll t = 1;
    //cin>>t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
           //cerr << "\n Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}