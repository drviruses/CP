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

void virus(){
          ll k, tc;
          cin>>k>>tc;
          while(tc--){
              ll tot;
              cin>>tot;
              ll sum = 0;
              vector<ll> arr(tot);
              for(auto i=1; i<=tot; i++) arr[i-1] = (ll)(pow((ll)i,(ll)k));
              sum = accumulate(all(arr),0);
              ll diff = 0;
              if(((ll)sum)%2 == 0) diff = 0; else diff = 1; 
              cout<<(ll)diff<<endl; 
              ll onesum = (sum + diff)/2;
              reverse(all(arr));
              string st(tot,'0');
              for(auto i=0; i<tot; i++){
                  if(arr[i] <= onesum){
                      onesum -= arr[i];
                      st[i] = '1';
                  }
                  if(onesum == 0) break;
              }
              reverse(all(st));
              cout<<st<<endl;
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