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
bool chk(vector<ll>&a){
    bool in = true;
    sort(all(a));
    set<ll> uniq;
    for(auto i=1; i<(ll)a.size(); i++){
        uniq.insert(a[i] - a[i-1]);
    }
    if(uniq.size() == 1) return true;
    return false;
}

void virus(){
          ll n, x, y;
          cin>>n>>x>>y;
          ll minn = LLONG_MAX;
          vector<ll> real;
          for(int i = 1; i <= x; i++) {
          for(int j = 1; j <= 50; j++) {
          vector<ll> ans;
          ll loop = n,val = i;
          while(loop--) {
            ans.push_back(val), val += j;
          }
          if(find(all(ans), x) != ans.end() and find(all(ans), y) != ans.end() and ans.size() == n) {
            if(*max_element(all(ans)) < minn) {
              minn = *max_element(all(ans));
              real = ans;
            }
          }
        }
      }
      for(auto i : real) cout << i << " ";
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
           cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}