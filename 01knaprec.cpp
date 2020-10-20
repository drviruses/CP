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

ll recknap(vector<ll>&val, vector<ll>&wt, ll knap, ll len){
    if(len == 0 or knap == 0) return 0;
    if(wt[len-1] > knap) return recknap(val, wt, knap, len-1);
    else{
        return max(recknap(val,wt,knap,len-1),val[len-1] + recknap(val,wt,knap - wt[len-1],len-1));
    }
}

void virus(){
          ll len, knap;
          cin >> len >> knap;
          vector<ll> val(len), wt(len);
          for(auto &i:val) cin >> i;
          for(auto &i:wt) cin >> i;
          cout<<recknap(val, wt, knap, len);
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef DR_VIRUS
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