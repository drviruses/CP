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

vector<vector<ll>> adj;
vector<ll> subtree;
vector<ll> centroid;
ll len;

void dfs(ll scr, ll par){
    subtree[scr] = 1;
    bool flag = true;
    for(auto i:adj[scr]){
        if(i != par){
            dfs(i,scr);
            subtree[scr] += subtree[i];
            if(subtree[i] > (len>>1)) flag = false;
        }
    }
    if(((len - subtree[scr])<<1) > len) flag = false;
    if(flag) centroid.push_back(scr);
}

void virus(){
          adj.clear(); subtree.clear(); centroid.clear(); 
          cin >> len;
          adj.resize(len); subtree.resize(len,0);
          for(auto i=0; i<len-1; i++){
              ll ini, fnl;
              cin >> ini >> fnl;
              ini--, fnl--;
              adj[ini].push_back(fnl); adj[fnl].push_back(ini);
          }
          dfs(0,-1);
          for(auto i:subtree) cerr<<i<<" ";
          cerr<<endl;
          if(centroid.size() == 1){
              cout<<1<<" "<<adj[0][0]+1<<endl;
              cout<<1<<" "<<adj[0][0]+1<<endl;
          }
          else{
              ll firc = centroid[0], secc = centroid[1], del;
              if(adj[secc][0] != firc){
                  del = adj[secc].front();
                  cout<<secc+1<<" "<<del+1<<endl;
              }
              else{
                  del = adj[secc][1];
                  cout<<secc+1<<" "<<del+1<<endl;
              }
              cout<<firc+1<< " " << del+1 << endl;
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