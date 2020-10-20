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
const ll mx = 1e5+1;

vector<ll> dp(mx);
vector<pair<ll,ll>> factor_arr;

void myfactor(ll num){
    ll cnt = 0;
    while(!(num%2)){
        num >>= 1, cnt++;
    }
    if(cnt) factor_arr.push_back({2,cnt});
    cnt = 0;
    for(auto i=3; i<=sqrt(num); i += 2){
        cnt = 0;
        while(!(num%i)){
            cnt++; num/=i;
        }
        if(cnt) factor_arr.push_back({i,cnt});
    }
    if(num > 2) factor_arr.push_back({num,1});
}


void prepreo(){
     for(auto i=1; i<mx; i++){
         factor_arr.clear();
         myfactor(i);
         /* 
         num * (1 - (1/f1))
          */
         ll prd = i;
         for(auto j:factor_arr){
             prd *= (j.first - 1);
             prd /= j.first;
         }
         dp[i] = prd;
     }
}

void prepro_ken(){
    iota(all(dp),0);
    for(auto i=2; i<mx; i++){
        if(dp[i] == i)
            for(auto j=i; j<mx; j += i) dp[j] -= dp[j]/i;
    }
}

void virus(){
          ll till, ans = 0;
          cin >> till;
          cout<<dp[till]*dp[till]<<endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    prepro_ken();
    partial_sum(all(dp),dp.begin());
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