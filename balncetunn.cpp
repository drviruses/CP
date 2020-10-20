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
#define ll    int
#define ld    long double
#define ull   unsigned long long
#define all(vec) vec.begin(),vec.end()
#define endl "\n"
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;


void virus(){
          ll len;
          cin >> len;
          vector<ll> in, out;
          for(auto i=0; i<len; i++){
              ll car;
              cin >> car;
              in.push_back(--car);
          }
          for(auto i=0; i<len; i++){
              ll car;
              cin >> car;
              out.push_back(--car);
          }
          vector<ll> pos(len);
          for(auto i=0; i<len; i++) pos[out[i]] = i;
          vector<ll> tm(len);
          for(auto i=0; i<len; i++) tm[i] = pos[in[i]];

          ll mx = INT_MIN, ans = 0;
          for(auto i=0; i<len; i++){
              if(tm[i] > mx) mx = tm[i];
              else ans++;
          } 
          cout<<ans;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

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