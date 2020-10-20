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
          ll n, m;
          cin >> n >> m;
          ll mat[n][m];
          for(auto i=0; i<n; i++)
            for(auto j=0; j<m; j++) cin >> mat[i][j];
          
          for(auto i=0; i<n; i++){
              for(auto j=1; j<m; j++) mat[i][j] += mat[i][j-1];
          }

          for(auto i=1; i<n; i++){
              for(auto j=0; j<m; j++) mat[i][j] += mat[i-1][j];
          }
            /* 
            
            1 2 3 4 5
            5 4 3 2 1
            2 3 1 5 4
            1 2 3 4 5

            1   3   6   10  15 
            6   12  18  24  30 
            8   17  24  35  45 
            9   20  30  45  60 
            (1,2) <--> (2,3) === (2,3) - (0,3) - (2,1) + (0,1) 
             */
          ll q;
          cin >> q;
          while(q--){
              ll a, b, c, d;
              cin >> a >> b >> c >> d;
              a--, b--, c--, d--;
              ll ans = mat[c][d];
              if(a > 0) ans -= mat[a-1][d];
              if(b > 0) ans -= mat[c][b-1];
              if(a > 0 and b > 0) ans += mat[a-1][b-1];
              cout<<ans<<endl;
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
           //cerr << "\n Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}