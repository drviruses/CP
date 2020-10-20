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
vector<ll> par;

void mybfs(ll scr){
    queue<ll> q;
    q.push(scr);
    visited[scr] = true;
    par[scr] = -1;
    while(!q.empty()){
        ll rec = q.front();
        q.pop();
        for(auto i:adj[rec]){
            if(!visited[i]){
                visited[i] = true;
                par[i] = rec;
                q.push(i);
            }
        }
    }
}

void virus(){
          ll nodes, ver;
          cin>>nodes>>ver;
          adj.resize(nodes); visited.resize(nodes,false); par.resize(nodes);
          ll ini,fnl;
          cin>>ini>>fnl;
          ini--, fnl--;
          set<pair<ll,ll>> nodespath;
          for(auto i=0; i<ver; i++){
              ll p, q;
              cin>>p>>q;
              p--,q--;
              if(p > q) swap(p,q);
              nodespath.insert({p,q});
          }
          vector<pair<ll,ll>> act(all(nodespath));
          for(auto i:act){
              adj[i.first].push_back(i.second); adj[i.second].push_back(i.first);
          }
          mybfs(ini);
          if(!visited[fnl]) cout<<"-1";
          else{
              vector<ll> path;
              for(auto i=fnl; i != -1; i = par[i]) path.push_back(i);
              reverse(all(path));
              cout<<path.size()-1<<endl;
              for(auto i:path) cout<<i+1<<" ";
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