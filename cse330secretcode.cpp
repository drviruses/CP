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
const ll mx = 1e7;

vector<ll> prime;
bool isprime[mx];

void seo(){
    memset(isprime,true,sizeof(isprime));
    isprime[0] = isprime[1] = false;
    for(auto i=2; i*i<mx; i++){
        if(isprime[i]){
            for(auto j=(i<<1); j<mx; j+=i) isprime[j] = false;
        }
    }
    for(auto i=2; i<mx; i++) if(isprime[i]) prime.push_back(i);
}

void virus(){
          ll num;
          cin>>num;
          ll pos = upper_bound(all(prime),num) - prime.begin();
          if(isprime[num]){
              string a = to_string(num);
              string b = a;
              reverse(all(b));
              if(a == b){
              cout<<num<<endl; return;
              }
          }
          for(auto i=pos; i<mx; i++){
              string a = to_string(prime[i]);
              string b = a;
              reverse(all(b));
              if(a == b){
                  cout<<prime[i]<<endl; return;
              }
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
    seo();
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