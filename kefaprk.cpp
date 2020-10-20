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

const ll mod = 1e5+7;
const ll inf = 1e18;

vector<ll> adj[mod];
vector<vector<ll>> path;
vector<ll> cat;
ll len, m, ans;


void mydfs(ll ref, ll scr, ll par){

    if(ref > m) return;

    bool in = false;
    for(auto i:adj[scr]){
        if(i != par){
            in = true;
            mydfs(ref*cat[i] + cat[i],i,scr);
            //cerr<<"here\n";
        }
    }
    if(!in) ans++;
}

void virus(){
          cin>>len>>m;
          cat.resize(len); 
          for(auto &i:cat) cin>>i;
          for(auto i=0; i<len-1; i++){
              ll ini, fnl;
              cin>>ini>>fnl;
              ini--, fnl--;
              adj[ini].push_back(fnl);
              adj[fnl].push_back(ini);
          }

          ll ref = cat[0];
          mydfs(ref, 0, -1);
          
          cout<<ans<<endl;

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