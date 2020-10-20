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
#define google(x) cout<<"\Case #"<<x<<"\:"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

ll popcount(ll num){
    num = num - ((num >> 1) & 0x55555555);
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    return ((num + (num >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}

bool mysort(pair<ll,ll> A, pair<ll,ll> B){
    return A.second > B.second;
}

void virus(){
        ll len, act;
        cin>>len;
        act = len;
        len = ((len<<1)<<1);
        unordered_map<ll,ll> cnt;
        for(auto i=0; i<len; i++){
            ll temp;
            cin>>temp;
            cnt[temp]++;
        }
        vector<pair<ll,ll>> arr(cnt.begin(),cnt.end());
        for(auto i:arr) if(i.second&1) i.second -= 1;
        unordered_map<ll,ll> area;
        for(auto i=0; i<(ll)arr.size(); i++){
            if(arr[i].second > )
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