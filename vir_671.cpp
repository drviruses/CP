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


void virus(){
          ll len;
          cin >> len;
          vector<ll> arr(len), ans;
          for(auto &i:arr) cin >> i;
          sort(all(arr));
          
          set<ll> uniq(all(arr));
          if((ll)uniq.size() < 3){
              cout<<"0\n"; 
              for(auto i:arr) cout<<i<<" ";  
              cout<<endl;
              return;
          }
          
          if(len&1){
              ll fnl = len-1, ini = 0;
              while(ini != (len>>1) or fnl != (len>>1)){
                  ans.push_back(arr[fnl]); ans.push_back(arr[ini]);
                  ini++, fnl--;
              }
              ans.push_back(arr[ini]);
          }
          else{
              ll fnl = len-2, ini = 0;
              while(ini != ((len - 1)>>1) or fnl != ((len - 1)>>1)){
                  ans.push_back(arr[fnl]); arr.push_back(arr[ini]);
                  ini++, fnl--;
              }
              ans.push_back(arr[ini]); ans.push_back(arr[len-1]);
          }
          
          ll vall = 0;
          for(auto i=1; i<len-1; i++){
              if(ans[i-1] > ans[i] and ans[i] < ans[i+1]){
                  vall++; 
              }
          }
          cout<<vall<<endl;
          for(auto i:ans) cout<<i<<" ";
          cout<<endl;
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
           //cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}