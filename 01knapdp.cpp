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


void virus(){
          ll len, wt;
          cin >> len >> wt;
          vector<ll> w, val;
          for(auto i=0; i<len; i++){
              ll a, b;
              cin >> a >> b;
              w.push_back(a); val.push_back(b);
          }
          ll dp[len+1][wt+1];
          for(auto i=0; i<=len; i++){
              for(auto j=0; j<=wt; j++){
                  if(i == 0 or j == 0) dp[i][j] = 0;
                  else if(w[i - 1] <= j) dp[i][j] = max( dp[i - 1][j], val[i - 1] + dp[i - 1][j - w[i - 1]] );
                  else dp[i][j] = dp[i - 1][j];
              }
          }
          cout<<(ll)dp[len][wt];
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
           //cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}