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
          vector<ld> arr(len);
          map<pair<ll,ll>,ll> cnt;
          for(auto &i:arr){
              cin>>i;
              ll num = llround((i*1e9));
              ll two = 0, five = 0;
              while(num%2 == 0){
                  two += 1; num /= 2;
              }
              while(num%5 == 0){
                  five += 1; num /= 5;
              }
              cnt[{two,five}]++;
          }
          ll ans = 0;
          for(auto i:cnt){
              for(auto j:cnt){
                  if((i.first.first + j.first.first >= 18) and (i.first.second + j.first.second >= 18)){
                      if(i < j) ans += (i.second * j.second);
                      if(i == j) ans += ((i.second*(i.second-1))>>1);
                  } 
              }
          }
          cout<<ans<<endl;
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