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


void virus(){
    ll len, k;
    cin>>len>>k;
    vector<ll> arr(len);
    for(auto &i:arr) cin>>i;
    ll dp[len];
    for(auto i=0; i<len; i++) dp[i] = 1e9;
    dp[0] = k;
    for(auto i=1; i<len; i++){
        dp[i] = dp[i-1] + k;
        ll cnt[101] = {};
        for(auto j=i; j>=0; j--){
            cnt[arr[j]]++;
            ll fight = 0;
            for(auto k:cnt) if(k > 1) fight += k;
            if(j != 0) dp[i] = min(dp[i],dp[j-1]+fight+k);
            else dp[i] = min(dp[i],k+fight);
        }
    }
    //for(auto i=0; i<=len; i++) cout<<dp[i]<<" ";
    //cout<<endl;
    cout<<dp[len-1]<<endl;
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