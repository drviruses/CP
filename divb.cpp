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

ll mat[101][101];
bool prd(ll n , ll m){
    ll pd = 1;
    for(auto i=0; i<n; i++) for(auto j=0; j<m; j++) pd *= mat[i][j];
    if(pd == 1) return true;
    return false;
}
void virus(){
          ll n,m,ini,fnl;
          cin>>n>>m>>ini>>fnl;
          vector <pair<ll,ll>> arr;
          bool row = true;
          for(auto i=0; i<n; i++) for(auto j=0; j<m; j++) mat[i][j] = 0;
          mat[ini-1][fnl-1] = 1;
          arr.push_back({ini,fnl});
          while(!prd(n,m)){
              if(row){
                        for(auto j=fnl-1; j >= 1; j--){
                            if(mat[ini-1][j-1] == 0) {mat[ini-1][j-1] = 1; arr.push_back({ini,j});}
                        }
                        for(auto k=fnl+1; k <= m; k++){
                            if(mat[ini-1] [k-1]== 0) {mat[ini-1][k-1] = 1; arr.push_back({ini,k});}
                        }
                        row = false;
                        pair<ll,ll> pp = arr.back();
                        ini = pp.first, fnl = pp.second;
              }
              else{
                        for(auto j=ini-1; j >= 1; j--){
                            if(mat[j-1][fnl-1] == 0) {mat[j-1][fnl-1] = 1; arr.push_back({j,fnl});}
                        }
                        for(auto k=ini+1; k <= n; k++){
                            if(mat[k-1][fnl-1] == 0) {mat[k-1][fnl-1] = 1; arr.push_back({k,fnl});}
                        }
                        row = true;
                        pair<ll,ll> pp = arr.back();
                        ini = pp.first, fnl = pp.second;
              }
          }
          for(auto i:arr) cout<<i.first<<" "<<i.second<<endl;
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
         //cout << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}