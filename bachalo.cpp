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

vector<vector<ll>> adj;
vector<bool> visited;
vector<ll> parent;

void mybfs(ll scr){
    queue<ll> q;
    q.push(scr);
    visited[scr] = true;
    parent[scr] = -1;
    while(!q.empty()){
        ll rec = q.front();
        q.pop();
        for(auto i:adj[rec]){
            if(!visited[i]){
                visited[i] = true;
                q.push(i);
                parent[i] = rec;
            }
        }
    }
}

void virus(){
       ll len;
       cin>>len;
       vector<ll> arr(len);
       for(auto &i:arr) cin>>i;
       adj.resize(len), visited.resize(len,false), parent.resize(len,0);
       for(auto i=0; i<len-1; i++){
           adj[arr[i]-1].push_back(arr[i+1]-1);
           adj[arr[i+1]-1].push_back(arr[i]-1);
       }
       mybfs(0);
       if(!visited[len-1]) cout<<"-1\n";
       else{
           vector<ll> path;
           for(auto i=len-1; i != -1; i = parent[i]) path.push_back(i);
           cout<<(ll)path.size() - 1<<endl;
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
         //cout << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}