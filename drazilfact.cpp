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


bool mysort(pair<ll,ll> a, pair<ll,ll> b){
    return a.first > b.first;
}

void virus(){
          ll len;
          cin>>len;
          string seq;
          cin>>seq;
          vector<ll> arr;
          for(auto i:seq) arr.push_back(i - '0');
          unordered_map<ll,ll> cnt;
          sort(all(arr),greater<ll>());
          for(auto i:arr){
              for(auto j=2; j<=i; j++) cnt[j]++;
          }
         vector<pair<ll,ll>> ans(all(cnt));
         sort(all(ans),mysort);
         for(auto i:ans){
             for(auto j=0; j<i.second; j++) cout<<i.first;
         }
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
           cerr << "\n Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}