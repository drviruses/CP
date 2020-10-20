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
          string s,cp,scp;
          cin>>s;
          cp = s;
        
          ll x;
          cin>>x;
          ll len = (ll)s.size();

          for(auto i=0; i<len; i++){
              bool in = false;
              if(!in and i < (len - x)){
                  if(s[i+x] == '0'){
                      cp[i] = '0'; in = true;
                  }
              }
              if(!in and i >= x){
                  if(s[i-x] == '0'){
                      cp[i] = '0'; in = true;
                  }
              }
              if(!in) cp[i] = '1';
          }

          scp = cp;
          
          for(auto i=0; i<len; i++){
              bool in = false;
              if(!in and i < (len - x)){
                  if(cp[i+x] == '1'){
                      scp[i] = '1'; in = true;
                  }
              }
              if(!in and i >= x){
                  if(cp[i-x] == '1'){
                      scp[i] = '1'; in = true;
                  }
              }
              if(!in) scp[i] = '0';
          }

          if(s != scp) cout<<"-1\n";
          else cout<<cp<<endl;
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
           cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}