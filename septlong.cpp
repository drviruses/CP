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

ll dp[1001];

void virus(){
          ll num;
          cin>>num;
          if(!(((num * (num+1))>>1)&1)){
              ll ans = 0;
              vector<ll> arr(num), f(num), b(num);
              iota(all(arr),1);
              partial_sum(all(arr),f.begin());
              partial_sum(arr.rbegin(),arr.rend(),b.begin());
              reverse(all(b));
              for(auto i=0; i<num; i++){
                  vector<ll> 
                  for(auto j=i+1; j<num; j++){
                      vector<ll> cf(all(f)), cb(all(b));
                      ll fir = arr[i], sec = arr[j];
                      for(auto k=i; k<j; k++) { cf[k] -= fir; cf[k] += sec; }
                      for(auto k=j; k>i; k--) { cb[k] += fir; cb[k] -= sec; }
                      for(auto k=0; k<num-1; k++) if(cf[k] == cb[k+1]) ans++;
                  }
              }
              cout<<ans<<endl;
          }
          else cout<<"0\n";
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