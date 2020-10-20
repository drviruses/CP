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

bool mysort(pair<ll,ll> A, pair<ll,ll> B){
    return A.second > B.second;
}

void virus(){
          ll len;
          cin>>len;
          map<ll,ll> cnt;
          multiset<ll,greater<ll>> gr;
          for(auto i=0; i<len; i++){
              ll t;
              cin>>t;
              cnt[t]++;
          }
          for(auto i:cnt) gr.insert(i.second);
          ll q;
          cin>>q;
          while(q--){
              char oper;
              cin>>oper;
              ll num;
              cin>>num;

              gr.erase(gr.find(cnt[num]));
              if(oper == '+') cnt[num]++;
              else cnt[num]--;
              gr.insert(cnt[num]);

              auto itr = gr.begin();
              ll fir = LLONG_MIN, sec = LLONG_MIN, thir = LLONG_MIN, tm = 3;    
              for(auto i:gr){
                  if(tm == 3) fir = i;
                  else if(tm == 2) sec = i;
                  else if(tm == 1) thir = i;
                  else break;
                  tm -= 1;
              }

              //cerr<<fir<<" "<<sec<<" "<<thir<<endl;
              
              if(fir >= 8){ cout<<"YES\n"; continue;}
              if((fir >= 6 and sec >= 2) or (fir >= 4 and sec >= 4)){ cout<<"YES\n"; continue;}
              if((fir >= 4 and sec >= 2 and thir >= 2)) {cout<<"YES\n"; continue;}
              cout<<"NO\n";
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
           cerr << "\n Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}