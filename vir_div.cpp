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


void virus(){
          ll len;
          cin>>len;
          vector<ll> arr(len), ans;
          unordered_map<ll,ll> str;
          for(auto &i:arr){ cin>>i; str[i] = 1; }
          ll mx = *max_element(all(arr));
          ans.push_back(mx);
          str[mx] = 0;
          for(auto i=1; i<len; i++){
              ll nfact = 0, indx = 0;
              for(auto j=0; j<len; j++){
                  if(str[arr[j]]){
                      if(__gcd(arr[j],mx) > nfact){
                          nfact = __gcd(arr[j],mx); indx = j;
                      }
                  }
              }
              ans.push_back(arr[indx]);
              str[arr[indx]] = 0;
              mx = nfact;
          }
          for(auto i:ans) cout<<i<<" ";
          cout<<endl;
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