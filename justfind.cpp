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

bool mysort(pair<ll,ll>& a, pair<ll,ll>& b){
    if(a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

void virus(){
          ll len, ans = 0;
          cin >> len;
          vector<ll> arr(len), e(len,0), o(len,0);
          vector<pair<ll,ll>> pos;
          for(auto i=0; i<len; i++) {
              cin >> arr[i];
              if(arr[i]&1) o[i] = 1;
              else e[i] = 1; 
              pos.push_back({arr[i], i});
          }
          partial_sum(all(arr),arr.begin());
          partial_sum(all(e), e.begin());
          partial_sum(all(o), o.begin());
          e.insert(e.begin(),0); o.insert(o.begin(),0); arr.insert(arr.begin(),0);
          /* 
          1
          10
          1 2 3 2 1 5 1 2 8 2
          o --> 0 1 1 2 2 3 4 5 5 5 5
          e --> 0 0 1 1 2 2 2 2 3 4 5
          arr --> 0 1 3 6 8 9 14 15 17 25 27
           */
          sort(all(pos), mysort);
          
          for(auto i=0; i<len-1; i++){
              if(pos[i].first == pos[i+1].first and abs(pos[i].second - pos[i+1].second) > 1){
                  ll ini = pos[i].second + 1, fnl = pos[i+1].second;
                  if((pos[i].first & 1) and (o[fnl] - o[ini])&1 ) ans = max(ans, arr[fnl] - arr[ini]);
                  else if((pos[i].first%2 == 0) and (e[fnl] - e[ini])%2 == 0 ) ans = max(ans, arr[fnl] - arr[ini]);
              }
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
           //cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}