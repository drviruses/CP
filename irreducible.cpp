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
#define ll    long long int
#define ld    long double
#define ull   unsigned long long
#define all(vec) vec.begin(),vec.end()
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

vector<ll> factor_arr;

void myfactor(ll num){
    for(auto i=2; i*i<=num; i++){
        if(!(num%i)){
            while(!(num%i)) num /= i;
            factor_arr.push_back(i);
        }
    }
    if(num > 1) factor_arr.push_back(num);
}

void virus(){
          /* 
          Euler toitent function
            this tells us numbers lesser than n whose gcd to n is 1.
            if num = p1^a1 * p2^a2
            then toient fun is = num * (1 - (1/p1)) * (1 - (1/p2));
           */
          ll num;
          while(cin >> num and num != 0){
              factor_arr.clear();
              myfactor(num);
              ld ans = num;
              for(auto i:factor_arr){
                  ans *= (i - 1);
                  ans /= i;
              }
              cout<<(ll)ans<<endl;
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
           //cerr << "\n Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}