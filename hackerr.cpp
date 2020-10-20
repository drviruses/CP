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
#define ll    long long int
#define ld    long double
#define ull   unsigned long long
#define endl "\n"
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L
 
const ll mod = 1e9+7;
const ll inf = 1e18;
 
ll popcount(ll num){
    num = num - ((num >> 1) & 0x55555555);
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    return ((num + (num >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}
 
vector<pair<ll,ll>> factor_arr;
 
void myfactor(ll num){ 
    ll count = 0;   
    while (!(num % 2)) { 
        num >>= 1; count++; 
    }  
    if (count) factor_arr.push_back({2,count}); 
    for (auto i = 3; i <= sqrt(num); i += 2) { 
        count = 0; 
        while (num % i == 0) { 
            count++; 
            num /= i; 
        } 
        if (count) factor_arr.push_back({i,count}); 
    } 
    if (num > 2) factor_arr.push_back({num,1});
}
 
ll myfun(ll a, ll b){
    return ((a%mod)*(b%mod))%mod;
}

ll gcdExtended(ll a, ll b, ll *x, ll *y); 
  
ll modInverse(ll b, ll m){ 
    ll x, y, g = gcdExtended(b, m, &x, &y); 
    if (g != 1) 
        return -1; 
    return (x%m + m) % m; 
} 
   
ll modDivide(ll a, ll b, ll m){ 
    a = a % m; 
    ll inv = modInverse(b, m); 
    if (inv == -1) {} 
    else return (inv * a) % m; 
} 
  
ll gcdExtended(ll a, ll b, ll *x, ll *y){ 
    if (a == 0){ 
        *x = 0, *y = 1; 
        return b; 
    } 
    ll x1, y1, gcd = gcdExtended(b%a, a, &x1, &y1); 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
    return gcd; 
} 
 
 
void virus(){
        ll len;
        cin>>len;
        vector<ll> arr(len),pre(len);
        for(auto &i:arr) cin>>i;
        partial_sum(arr.begin(),arr.end(),pre.begin(),myfun);
        pre.insert(pre.begin(),1);
        //for(auto i:pre) cout<<i<<" ";
        ll ans = 0;
        for(auto i=1; i<=ceil((ld)len/2.0)+1; i++){
            ll till = (i) + (len/2) - 1;
            ans += modDivide((pre[till]),(pre[i-1]),mod);
           // cout<<pre[till]/pre[i]<<endl;
        }
        cout<<ans%mod;
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
         //cout << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}