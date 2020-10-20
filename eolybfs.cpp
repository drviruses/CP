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
vector<ll> dist, parent;

void mybfs(ll scr, ll des){
    queue<ll> q;
    q.push(scr);
    visited[scr] = true;
    parent[scr] = -1;
    vector<ll> poss;
    ll cnt = 0;
    while(!q.empty()){
        ll rec = q.front();
        q.pop();
        for(auto i:adj[rec]){
            if(!visited[i]){
                cnt++;
                if(i == des and cnt%2 == 0) poss.push_back(cnt);
                else{
                    visited[i] = true;
                    q.push(i);
                    dist[i] = dist[rec] + 1;
                    parent[i] = scr;
                }
            }
        }
    }
    sort(all(poss));
    if(poss.empty()) cout<<"-1";
    else cout<<*poss.begin();
}

void virus(){
          ll node, ver, ini, fnl;
          cin>>node>>ver>>ini>>fnl;
          ini--, fnl--;
          adj.resize(node); visited.resize(node,false); dist.resize(node); parent.resize(node);
          for(auto i=0; i<ver; i++){
              ll a, b;
              cin>>a>>b;
              a--, b--;
              adj[a].push_back(b); adj[b].push_back(a);
          }
          mybfs(ini,fnl);
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