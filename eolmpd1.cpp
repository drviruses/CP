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

vector<vector<ll>> adj;
vector<bool> visited;

void mybfs(ll scr){
    queue<ll> q;
    visited[scr] = true;
    q.push(scr);
    while(!q.empty()){
        ll cur = q.front();
        q.pop();
        for(auto i:adj[cur]){
            if(!visited[i]){
                visited[i] = true;
                
            }
        }
    }
}

void virus(){
          ll nodes, ini, fnl;
          cin>>nodes>>ini>>fnl;
          adj.resize(nodes); visited.resize(nodes,false);
          ini--, fnl--;
          ll mat[nodes][nodes];
          for(auto i=0; i<nodes; i++){
              for(auto j=0; j<nodes; j++){
                cin>>mat[i][j];
                if(mat[i][j] == 1) adj[i].push_back(j);
              }
          }
          mybfs(ini);
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