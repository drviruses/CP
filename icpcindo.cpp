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
          ll num, col = 0, opo = 0;
          cin >> num;
          bool turn = false;
          while(num){
              if(!turn){
                  if(num&1){
                      col++; num--;
                  }
                  else{
                      if((num>>1)%2 == 0 and num != 4){
                          col++; num--;
                      }
                      else{ col += (num>>1); num >>= 1; }
                  }
                  turn = true;
              }
              else{
                  if(num&1){
                      opo++; num--;
                  }
                  else{
                      if((num>>1)%2 == 0 and num != 4){
                          opo++; num--;
                      }
                      else { opo += (num>>1); num >>= 1;}
                  }
                  turn = false;
              }
          }
          cout<<(ll)col<<endl;
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
           //cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}