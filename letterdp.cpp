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
          string seq;
          cin>>seq;
          bool alllower = false, allupper = false;
          for(auto i:seq){
              if(isupper(i)) alllower = true;
              if(islower(i)) allupper = true;
          }
          if(!alllower or !allupper){
              cout<<"0"; return;
          }
          ll len = (ll)seq.size();
          vector<ll> lower(len,0), upper(len,0);
          for(auto i=0; i<len; i++) if(islower(seq[i])) upper[i] = 1;
          for(auto i=len-1; i>=0; i--) if(isupper(seq[i])) lower[i] = 1;
          partial_sum(upper.begin(),upper.end(),upper.begin());
          reverse(lower.begin(),lower.end());
          partial_sum(lower.begin(),lower.end(),lower.begin());
          reverse(lower.begin(),lower.end());
          upper.insert(upper.begin(),0);
          lower.insert(lower.end(),0);
          ll mn = len;
          for(auto i=0; i<=(ll)seq.size(); i++) mn = min(mn,lower[i]+upper[i]);
          cout<<mn;
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