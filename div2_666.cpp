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

ll power(ll a, ll b){
    ll ans = 1;
    for(auto i=1; i<=b; i++) ans *= a;
    return ans;
}

void virus(){
         ll len;
         cin>>len;
         vector<ll> arr(len);
         for(auto &i:arr) cin>>i;
         ll sum = (ll)(accumulate(all(arr),0ll)), i = 1, temp = 0ll, ans = LLONG_MAX;
         sort(all(arr));
         for( i=1; i<= 1e5; i++){
             //cerr<<i;
             for(auto j=0; j<len; j++){
                 temp += abs(pow(i,j) - arr[j]);
                 if(temp > ans){
                     cout<<ans; return;
                 }
             }
             ans = temp;
             temp = 0;
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

    ll t=1;
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