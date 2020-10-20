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
          string seq;
          cin>>seq;
          vector<ll> pat1, pat2;
          for(auto i=0; i<(ll)seq.size()-1; i++){
              if(seq[i] == 'A' and seq[i+1] == 'B') pat1.push_back(i);
              if(seq[i] == 'B' and seq[i+1] == 'A') pat2.push_back(i);
          }
          if(pat1.size() == 0 || pat2.size() == 0){
              cout<<"NO"; return;
          }
          sort(all(pat1)); sort(all(pat2));
          if(abs(pat1[0]-pat2.back()) > 1 || abs(pat2[0] - pat1.back()) > 1){
              cout<<"YES"; return;
          }
          cout<<"NO";

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