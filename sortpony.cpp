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
          ll len;
          cin>>len;
          vector<ll> arr(len);
          for(auto &i:arr) cin>>i;
          if(is_sorted(arr.begin(),arr.end())){
              cout<<"0\n"; return;
          }
          ll br = 0;
          for(auto i=1; i<len; i++){
              if(arr[i] < arr[i-1]){
                  br = i; break;
              }
          }
          if(!is_sorted(arr.begin()+br,arr.end())){
              cout<<"-1\n"; return;
          }
          ll fir = arr[0], cnt = 0;
          for(auto i=len-1; i>=br; i--){
              if(arr[i] <= fir){
                  cnt ++; continue;
              }
              else{
                  cout<<"-1\n"; return;
              }
          }
          cout<<cnt<<endl;
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