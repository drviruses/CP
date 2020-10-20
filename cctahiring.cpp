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

vector<ll> quality, quan;
vector<ll> blk(1000);
ll blksx;

ll maxquery(ll l, ll r){
    ll ret = LLONG_MIN;
    ll ret_indx;
    while(l < r and l%blksx!=0 and l!=0){
        if(quality[l] > ret){
            ret = quality[l]; ret_indx = l;
        }
    }
    while(l+blksx <= r){
        if(ret < quality[blk[l/blksx]]){
            ret = quality[blk[l/blksx]]; ret_indx = l+blksx;
        }
    }
    while(l <= r){
        if(quality[l] > ret){
            ret = quality[l]; ret_indx = l;
        }
    }
    return ret_indx;
}

void prepro(vector<ll>&a){
    ll len = (ll)a.size();
    blksx = sqrt(len);
    ll mx = a[0], indx = 0, mx_indx = 0;
    for(auto i=1; i<len; i++){
        if(i%blksx == 0){
            blk[indx] = mx_indx;
            indx++;
        }
        if(a[i] > mx){
            mx = max(mx,a[i]);
            mx_indx = i;
        }
    }
}

void virus(){
          ll len,q;
          cin>>len>>q;
          quality.clear(), quan.clear();
          quality.resize(len), quan.resize(len);
          for(auto &i:quality) cin>>i;
          for(auto &i:quan) cin>>i;
          prepro(quality);
          while(q--){
              ll ty;
              cin>>ty;
              if(ty == 1){
                  ll l, r, qt;
                  cin>>l>>r>>qt;
                  l--, r--;
                  ll indx = maxquery(l,r);
                  quality[indx] += qt;
              }
              else{
                  ll vis, indx, qt, thr;
                  cin>>vis>>indx>>qt>>thr;
                  ll l = max(0ll,indx-vis-1), r = min(len-1,indx+vis-1);
                  ll indx = maxquery(l,r);
                  

              }
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
           cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}