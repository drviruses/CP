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


ll bfs(ll scr, ll covid, ll len){
    vector<bool> visited(len, false);
    ll cnt = 1;
    visited[scr] = true;
    queue<ll> q;
    q.push(scr);
    while(!q.empty()){
        ll rec = q.front();
        q.pop();
        for(auto i:adj[rec]){
            if(!visited[i] and i != covid){
                cnt++;
                q.push(i);
                visited[i] = true;
            }
        }
    }
    return cnt;
}

void virus(){
          ll len, nodes, waste;
          cin >> len >> nodes >> waste;
          
          adj.resize(len);
          vector<pair<ll,ll>> arr;
          for(auto i=0; i<len-1; i++){
              ll ini, fnl;
              cin >> ini >> fnl;
              ini--, fnl--;
              arr.push_back({ini, fnl});
              adj[ini].push_back(fnl);
              adj[fnl].push_back(ini);
          }

          for(auto i:arr)  cout << bfs(i.first, i.second, len) * bfs(i.second, i.first, len) << endl;
          
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
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
           //cerr << "\n Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}