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
#define int    long long
#define ld    long double
#define ull   unsigned long long
#define endl "\n"
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L
unordered_map<int,bool> par;
void add_edge(vector<int> adj[], int src, int dest){ 
    adj[src].push_back(dest); 
    adj[dest].push_back(src); 
} 

bool BFS(vector<int> adj[], int src, int dest, int v, int pred[], int dist[]){ 
    list<int> queue; 
    bool visited[v];  
    for (int i = 0; i < v; i++) { 
        visited[i] = false; 
        dist[i] = INT_MAX; 
        pred[i] = -1; 
    }  
    visited[src] = true; 
    dist[src] = 0; 
    queue.push_back(src); 
    while (!queue.empty()) { 
        int u = queue.front(); 
        queue.pop_front(); 
        for (int i = 0; i < adj[u].size(); i++) { 
            if (visited[adj[u][i]] == false and par[adj[u][i]] == true) { 
                visited[adj[u][i]] = true; 
                dist[adj[u][i]] = dist[u] + 1; 
                pred[adj[u][i]] = u; 
                queue.push_back(adj[u][i]); 
                if (adj[u][i] == dest) 
                    return true; 
            } 
        } 
    } 
    return false; 
} 

void printShortestDistance(vector<int> adj[], int s,int dest, int v) { 
    int pred[v], dist[v]; 
    if (BFS(adj, s, dest, v, pred, dist) == false) { 
        cout << "-1\n"; 
        return; 
    } 
    vector<int> path; 
    int crawl = dest; 
    path.push_back(crawl); 
    while (pred[crawl] != -1) { 
        path.push_back(pred[crawl]); 
        crawl = pred[crawl]; 
    } 
cout<<path.size()-1<<endl;
}


void virus(){
       int n,m;
       cin>>n>>m;
       for(auto i=0;i<m;i++){
           int t;
           cin>>t;
            par[t] = true;
       }
       vector<int> adj[n];
       int q;
       cin>>q;
       while(q--){
           int ini,fnl;
           cin>>ini>>fnl;
           add_edge(adj,ini-1,fnl-1);
       }
       int scr,des;
        cin>>scr>>des;
        printShortestDistance(adj, scr-1, des-1,n);
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    int t;
    cin>>t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
         //cout << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}