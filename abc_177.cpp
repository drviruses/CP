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
vector<ll> comp;

bool mysort(pair<ll,ll> A, pair<ll,ll> B){
    if(A.first == B.first) return A.second < B.second;
    return A.first < B.first;
}

void mydfs(ll scr){
    visited[scr] = true;
    comp.push_back(scr);
    for(auto i:adj[scr]){
        if(!visited[i]) mydfs(i);
    }
}

void virus(){
    ll len,fct;
    cin>>len>>fct;
    if(fct == 0){
        cout<<"1"; return;
    }
    set<pair<ll,ll>> uniq;
    for(auto i=0; i<fct; i++){
        ll ini, fnl;
        cin>>ini>>fnl;
        if(ini > fnl) swap(ini,fnl);
        uniq.insert({ini,fnl});
    }
    vector<pair<ll,ll>> arr(uniq.begin(),uniq.end());
    sort(all(arr),mysort);
    ll actlen = (ll)arr.size();
    adj.resize(len); visited.resize(len,false);
    for(auto i:arr){
        adj[i.first-1].push_back(i.second-1);
        adj[i.second-1].push_back(i.first-1);
    }
    ll ans = LLONG_MIN;
    for(auto i=0; i<len; i++){
        if(!visited[i]){
            comp.clear();
            mydfs(i);
            ans = max(ans,(ll)comp.size());
        }
    }
    cout<<ans;
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