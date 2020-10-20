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
          ll len, k;
          cin >> len >> k;
          vector<ll> arr(len);
          for(auto &i:arr) cin >> i;
          set<ll> uniq(all(arr));
          //if uniq number are gretaer than k it will be impossible to make sum equal
          //so if uniq is less make it upto size k by adding 1 or any number you want (1 to len)
          if((ll)uniq.size() > k) cout<<"-1\n";
          else{
              cout<<len*k<<endl;
              for(auto i=0; i<len; i++){
                  for(auto j:uniq) cout<<j<<" ";
                  for(auto j=0; j<k-(ll)uniq.size(); j++) cout<<"1 ";
              }
              cout<<endl;
          }
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef DR_VIRUS
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