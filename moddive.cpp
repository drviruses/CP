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
        // here we are given that c will be prime so we can use Fermat's Little Theorem
        // we need to find (a/b)%c == a * (inverse of b under modulo c)
          ll a, b, c;
          cin >> a >> b >> c; 
          auto power = [&](ll a, ll b, ll mod){
              ll ans = 1;
              while(b){
                  if(b&1) ans = ((ans%mod)*(a%mod))%mod;
                  b >>= 1;
                  a = (a*a)%mod;
              }
              return ans;
          }; 
          cout << (a * power(b,c-2,c))%c << endl;
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