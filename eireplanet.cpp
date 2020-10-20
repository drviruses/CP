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

bool mysort(pair<ll,pair<ll,ll>> A, pair<ll,pair<ll,ll>> B){
    return A.second.first < B.second.first;
}

void virus(){
          ll hr,wr,q;
          cin>>hr>>wr>>q;
          vector<pair<ll,pair<ll,ll>>> ht;
          while(wr--){
              ll h, ini,fnl;
              cin>>h>>ini>>fnl;
              ht.push_back({h,{ini,fnl}});
          }
          sort(ht.begin(),ht.end(),mysort);
          while(q--){
              ll h, tim;
              cin>>h>>tim;
              for(auto j:ht) 
                if( tim >= j.second.first and tim <= j.second.second){   
                    if(h > j.first){ cout<<"YES\n"; goto here; } 
                    else {cout<<"NO\n"; goto here;}
                }
                cout<<"YES\n";
                here: ;
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
           cerr << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}