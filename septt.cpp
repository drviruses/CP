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
          ll n;
          cin>>n;
          ll mat[n][n];
          for(auto i=0; i<n; i++){
              for(auto j=0; j<n; j++) cin>>mat[i][j];
          }
          vector<ll> arr;
          for(auto i=1; i<n; i++){
               if(mat[0][i] == i+1) arr.push_back(0); else arr.push_back(1);
          }
          vector<ll> one;
          ll cnt = 0; bool inc = false;
          for(auto i=0; i<n; i++){
              if(!inc){
                  if(arr[i] == 1){
                      inc = true; cnt = 1;
                  }
              }
             else if(inc){
                  if(arr[i] == 1) cnt++;
                  else { if(cnt!=0) one.push_back(cnt); cnt = 0;}
              }
          }
          if(cnt != 0) one.push_back(cnt);
          if(mat[0][1] != 2){
              cout<<(((ll)one.size() - 1)<<1) + 1<<endl;
          }
          else cout<<(((ll)one.size())<<1)<<endl;

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