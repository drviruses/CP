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
#define ll    int


bool mysort(pair<ll,ll> A, pair<ll,ll> B){
    return A.second > B.second;
}

void virus(){
       ll len;
       cin>>len;
       vector<ll> arr(len);
       for(auto &i:arr) cin>>i;
       sort(arr.begin(),arr.end());
       ll mn = arr[0]+arr[1], mx = arr[len-1] + arr[len-2], ans = 0;
       for(auto i=mn; i<=mx; i++){
           ll cnt=0;
           unordered_map<ll,ll> ele;
           for(auto j=0; j<len; j++){
                if(arr[j] < i){
                    if(ele[i-arr[j]]) cnt++, ele[i-arr[j]]--;
                    else ele[arr[j]]++;
                }
           }
           ans = max(ans,cnt);
       }
       cout<<ans<<endl;
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