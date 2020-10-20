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

void virus(){
    ll turn;
    cin>>turn;
    unordered_map<string,ll> mx;
    unordered_map<string,string> ans;
    while(turn--){
        string s;
        ll pt;
        cin>>s>>pt;
        mx[s] = max(mx[s],pt);
    }
    ll player = (ll)mx.size();
    for(auto i:mx){
        ll cnt = 0;
        for(auto j:mx) if(j.second <= i.second) cnt++;
        if(((ld)cnt/(ld)player)*100.0 >= 99.0) ans[i.first] = "pro";
        else if(((ld)cnt/(ld)player)*100.0 >= 90.0) ans[i.first] = "hardcore";
        else if(((ld)cnt/(ld)player)*100.0 >= 80.0) ans[i.first] = "average";
        else if(((ld)cnt/(ld)player)*100.0 >= 50.0) ans[i.first] = "random";
        else if(((ld)cnt/(ld)player)*100.0 < 50.0) ans[i.first] = "noob";
    }
    cout<<ans.size()<<endl;
    for(auto i:ans) cout<<i.first<<" "<<i.second<<endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */

    ll t = 1;
    //cin>>t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
           cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}