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
const ll mx = 1e4;

void virus(){
    while(true){
          string a, b;
          cin >> a;
          if(a[0] == '#') return;
          else{
              cin >> b;
              ll m = (ll)a.size(), n = (ll)b.size();
              ll dp[m + 1][n + 1];
              for(auto i=0; i<=m; i++) dp[i][0] = 0;
              for(auto i=0; i<=n; i++) dp[0][i] = 0;
              for(auto i=1; i<=m; i++){
                  for(auto j=1; j<=n; j++){
                      if(a[i-1] == b[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                      else{
                          dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                      }
                  }
              }
              ll lcs = dp[m][n];
              cout<<(m - lcs)*15 + (n - lcs)*30<<endl; 
          }
    }
}


int32_t main(){
    /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */

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