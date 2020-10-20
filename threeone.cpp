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

const ll mod = 12345;
const ll inf = 1e18;
const ll mx = 1e5+1;


void virus(){
          /* 
          Here I have to find the number of subsequeces where there not more equal to k one in string;
          for that i will find number of subsequences with having atleast 3 ones in it;
          and then subtract it from 2^n;
           */
          ll num;
          cin >> num;
          if(num == 1 or num == 2){
              cout<<(1<<(num)); return;
          }
          vector<ll> dp(mx,0);
          for(auto i=3; i<mx; i++) dp[i] = (((1<<(i-3))%12345) + dp[i-1]%mod + dp[i-2]%mod + dp[i-3]%mod)%12345;
          cout<<(ll)((1<<(num))%12345 - (dp[num]%12345))%12345<<endl;
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
           //cerr << "\n Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}