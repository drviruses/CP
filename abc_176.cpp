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

bool mysort(pair<ll,ll> a, pair<ll,ll> b){
    return a.second > b.second;
}

void virus(){
        ll n,m;
        cin>>n>>m;
        ll spt;
        cin>>spt;
        ll col[m] = {}, row[n] = {};
        set<pair<ll,ll>> ss;
        while(spt--){
            ll i,j;
            cin>>i>>j;
            i--,j--;
            col[j]++;
            row[i]++;
            ss.insert({i,j});
        }
        
        ll colmx = *max_element(col,col+m); ll rowmx = *max_element(row,row+n);
        ll sum = colmx+rowmx;
        vector<ll> indxx, indy;
        for(auto i=0; i<n; i++){
            if(row[i] == rowmx) indxx.push_back(i);
        }
        for(auto i=0; i<m; i++){
            if(col[i] == colmx) indy.push_back(i);
        }
        sum -= 1;
        for(auto i:indxx){
            for(auto j:indy){
                if(ss.count({i,j}) == 0){
                    sum += 1; goto here;
                }
            }
        }
        here:;
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