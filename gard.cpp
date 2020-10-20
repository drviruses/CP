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
#define ll    int
#define ld    long double
#define ull   unsigned long long
#define endl "\n"
#define all(vec) vec.begin(),vec.end()
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L


bool in = false;
ll mat[3][101];

vector<ll> ans(101, -1);

void myrec(ll curlen, ll val, ll len){
        
        if( (curlen == len and ans[1] == val) or curlen >= len + 1 or ans[curlen - 1] == val ) return;
        
        ans[curlen] = val;

        for(auto j=0; j<3; j++){
             myrec(curlen + 1, mat[j][curlen], len);  
             if(ans[len] != -1) return; 
        }

}

void virus(){
          ans.clear();
          ans.resize(101, -1);
          
          ll len;
          cin >> len;
          
          for(auto i=0; i<3; i++){
              for(auto j=0; j<len; j++) cin >> mat[i][j];
          }
          
          myrec(0, -1, len);

          for(auto i=1; i<=len; i++) cout << ans[i] << " ";
          cout << endl;
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
           //cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}