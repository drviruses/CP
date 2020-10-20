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
    return a.first > b.first;
}

void virus(){
          ll len, k, cnt0 = 0;
          cin >> len >> k;
          string seq;
          cin >> seq;
          /* 
             001100010100010
           */
          deque<ll> two, one;
          for(auto i:seq){
              if(i == '0') cnt0++;
              else if(cnt0 != 0) {
                  two.push_back(cnt0);
                  cnt0 = 0;
                }
          }
          if(cnt0 != 0) two.push_back(cnt0);

          if(seq.front() == '0'){
              one.push_back(two.front()); two.pop_front();
          }
          if(seq.back() == '0'){
              one.push_back(two.back()); two.pop_back();
          }

          auto cal = [&](vector<ll> arr, ll a, ll b, ll k){
                if(k < 0) return inf;
                arr.push_back(a); arr.push_back(b);
                sort(all(arr));
                ll len = (ll)arr.size();
                k >>= 1;
                return accumulate(arr.begin(), arr.begin() + len - k, 0ll);
          };

          vector<ll> act_two(all(two));
          ll ans = len, fir = 0, sec = 0;

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