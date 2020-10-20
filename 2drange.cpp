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
          ll row, col;
          cin>>row>>col;
          ll mat[row][col];
          for(auto i=0; i<row; i++){
              for(auto j=0; j<col; j++) cin>>mat[i][j];
          }
          //Row Wise
          for(auto i=0; i<row; i++){
              for(auto j=1; j<col; j++) mat[i][j] += mat[i][j-1];
          }
          
          //Col Wise
          for(auto i=0; i<col; i++){
              for(auto j=1; j<row; j++) mat[j][i] += mat[j-1][i];
          }
          
          for(auto i=0; i<row; i++){
              for(auto j=0; j<col; j++) cout<<mat[i][j]<<" ";
              cout<<endl;
          }

          ll a,b,c,d,sum = 0;
          cin>>a>>b>>c>>d;
          //a--,b--,c--,d--;
          sum += mat[c][d];
          if(b > 0) sum -= mat[c][b-1];
          if(a > 0) sum -= mat[a-1][d];
          if(a > 0 and b > 0) sum += mat[a-1][b-1];
          cout<<sum<<endl;
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