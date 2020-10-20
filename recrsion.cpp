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
char mat[100][100];
ll n;

bool isvalid(ll x, ll y){
    if(x >= n or x < 0 or y >= n or y < 0) return false;
    return true;
}

void path(ll x, ll y){
    if(mat[x][y] == 'E'){
        cout<<"YES"; exit(0);
    }
    if(mat[x][y] == '*') return;
    if(isvalid(x-1,y)) path(x-1,y);
    if(isvalid(x+1,y)) path(x+1,y);
    if(isvalid(x,y-1)) path(x,y-1);
    if(isvalid(x,y+1)) path(x,y+1);
}

void virus(){
          
          cin>>n;
          ll locx = 0, locy = 0;
          for(auto i=0; i<n; i++){
              for(auto j=0; j<n; j++){
                  cin>>mat[i][j]; if(mat[i][j] == 'S') locx = i, locy = j;
              }
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