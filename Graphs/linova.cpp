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
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

ll popcount(ll num){
    num = num - ((num >> 1) & 0x55555555);
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    return ((num + (num >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}

vector<pair<ll,ll>> factor_arr;

void myfactor(ll num){ 
    ll count = 0;   
    while (!(num % 2)) { 
        num >>= 1; count++; 
    }  
    if (count) factor_arr.push_back({2,count}); 
    for (auto i = 3; i <= sqrt(num); i += 2) { 
        count = 0; 
        while (num % i == 0) { 
            count++; 
            num /= i; 
        } 
        if (count) factor_arr.push_back({i,count}); 
    } 
    if (num > 2) factor_arr.push_back({num,1});
}

vector<bool> visited;
vector<vector<ll>> adj;
vector<ll> bfs, parent;
vector<pair<ll,ll>> arr;

void mybfs(ll scr){
    queue<ll> q;
    q.push(scr);
    visited[scr] = true;
    while(!q.empty()){
        ll rec = q.front();
        q.pop();
        for(auto i:adj[rec]){
            if(!visited[i]){
                visited[i] = true;
                q.push(i);
                bfs[i] = bfs[rec] + 1;
            }
        }
    }
    for(auto i=0; i<(ll)bfs.size(); i++) arr.push_back({i,bfs[i]});
}

bool mysort(pair<ll,ll> &A, pair<ll,ll> &B){
    return A.second > B.second;
}

void virus(){
        ll node, k;
        cin>>node>>k;
        adj.resize(node);
        visited.resize(node,false), bfs.resize(node,0);
        node--;
        while(node--){
            ll ini, fnl;
            cin>>ini>>fnl;
            ini--, fnl--;
            adj[ini].push_back(fnl);
            adj[fnl].push_back(ini);
        }
        mybfs(0);
        sort(arr.begin(),arr.end(),mysort);
        ll sum = 0;
        for(auto i=0; i<k; i++) sum += arr[i].second;
        cout<<sum;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ll t=1;
    //cin>>t;
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