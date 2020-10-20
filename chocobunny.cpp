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

ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;


void virus(){
          ll len;
          cin>>len;
          vector<ll> ans(len,-1);
          ll indx = 0;
          for(auto i=1; i<len; i++){
              ll fir, sec;
              cout<<"? "<<indx+1<<" "<<i+1<<endl;
              cin>>fir;
              cout<<"? "<<i+1<<" "<<indx+1<<endl;
              cin>>sec;
              if(fir > sec){ ans[indx] = fir; indx = i; } 
              else ans[i] = sec;
          }
          ans[indx] = len;
          cout<<"! ";
          for(auto i:ans) cout<<i<<" ";
          cout<<endl;
}


int32_t main(){
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
          // cerr << "\n Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}