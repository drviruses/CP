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
          string a, b;
          cin >> a >> b;
          ll n = (ll)a.size(), m = (ll)b.size();
          ll dp[n+1][m+1];
          for(auto i=0; i<=n; i++) dp[i][0] = 0;
          for(auto i=0; i<=m; i++) dp[0][i] = 0;
          
          for(auto i=1; i<=n; i++){
              for(auto j=1; j<=m; j++){
                  if(a[i - 1] == b[j - 1]) dp[i][j] = dp[i-1][j-1] + 1;
                  else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
              }
          }

          string ans = "";
          while(n and m){
              if(dp[n-1][m] == dp[n][m]) n--;
              else if(dp[n][m-1] == dp[n][m]) m--;
              else{
                  ans += a[n-1];
                  n--, m--;
              }
          }
          reverse(all(ans));
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