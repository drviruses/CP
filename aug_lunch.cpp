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


bool mysort(pair<ll,ll>a , pair<ll,ll> b){
    if(a.second == b.second) return a.first<b.first;
    return a.second > b.second;
}

void virus(){
    ll n,m;
    cin>>n>>m;
    vector<ll> ini(n);
    for(auto &i:ini) cin>>i;
    vector<vector<ll>> tot(n,vector<ll>(m,0));
    for(auto i=0; i<n; i++){
        for(auto j=0; j<m; j++){
            ll t;
            cin>>t;
            tot[i][j] = ini[i] + t;
            ini[i] += t;
        }
    }
    
    vector<vector<ll>> pos(n,vector<ll>(m,0));
    for(auto i=0; i<m; i++){
        vector<ll> pl_temp;
        for(auto k=0; k<n; k++) pl_temp.push_back(tot[k][i]);
        set<ll,greater<ll>> uniq(all(pl_temp));
        vector<ll> srr(uniq.begin(),uniq.end());
        for(auto k=0; k<n; k++) pos[k][i] = find(srr.begin(),srr.end(),tot[k][i]) - srr.begin();
    }
    
    ll cnt = 0;
    for(auto i=0; i<n; i++){
        vector<ll> mn_t(all(tot[i]));
        ll rating = max_element(all(mn_t)) - mn_t.begin();
        ll rank = min_element(pos[i].begin(),pos[i].end()) - pos[i].begin();
        if(rating != rank) cnt++;
    }
    cout<<cnt<<endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
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
           //cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}