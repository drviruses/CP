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
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;


void virus(){
          ll boy;
          cin>>boy;
          ll cnt = 0;
          vector<ll> B(boy);
          for(auto &i:B) cin>>i;
          sort(B.begin(),B.end());
          ll gr;
          cin>>gr;
          vector<ll> G(gr);
          for(auto &i:G) cin>>i;
          sort(G.begin(),G.end());
          ll last = 0,j=0;
          for(auto i=0; i<boy; i++){
              for( j=last; j<gr; j++){
                  if(abs(B[i]-G[j]) <= 1) {cnt++; G[j] += mod; break;}
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
           cerr << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}