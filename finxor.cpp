/*
    @uthor: Amit Kumar
    user -->GitHub: drviruses ; CodeChef: dr_virus_fan ; Codeforces,AtCoder,Hackerearth,Hakerrank: dr_virus;
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
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

vector<ll> ans_xor;

ll virus(){
          ans_xor.clear();
          ll len, actans = 0;
          cin>>len;
          auto ask = [&](ull x, ull y){
              cout<<x<<" "<<y<<endl;
              ll res;
              cin>>res;
              return res;
          };
          for(auto i=20; i>=1; i--) ans_xor.push_back(ask(1ull,(1ull<<i)));
          ll sum = *ans_xor.begin() - (len*(1ull<<20));
          if(sum&1) actans++;
          for(auto i=1; i<20; i++){
              if(ans_xor[i] < sum){
                  ll temp = ((sum - ans_xor[i])/(1ull<<(20 - i)) + len);
                  ans_xor[i] = (temp>>1);
              }
              else{
                  ll temp = len - ((abs(ans_xor[i] - sum))/(1ull<<(20 - i)));
                  ans_xor[i] = (temp>>1);
              }
          }
          for(auto i=1; i<20; i++) if(ans_xor[i]&1) actans += (1ull<<(20 - i));
          auto check = [&](ll x){
              cout<<2<<" "<<x<<endl;
              ll res;
              cin>>res;
              return res;
          };
          return check(actans);
}


int32_t main(){
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ll t = 1;
    cin>>t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
           cerr << "\n Time: "<<duration.count()<<endl;
           cout<<endl;
        //your code goes here
    }
    return 0;
}