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
#define google(x) cout<<"Case #"<<x<<": "
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;


void virus(){
          ll len, x;
          cin >> len >> x;
          vector<pair<ll,ll>> arr;
          for(auto i=0; i<len ;i++){
              ll ini , fnl;
              cin >> ini >> fnl;
              arr.push_back({ini,fnl});
          }
          sort(all(arr));
          ll rob = 0, fir = arr[0].first;
          for(auto i:arr){
              if(i.second <= fir) continue;
              ll temp = max(i.first,fir);
              ll req = i.second - temp;
              ll add = req/x + (req%x != 0);
              fir = temp + add*x;
              rob += add;
          }
          google(google_itr);
          cout<<rob<<endl;
          google_itr++;
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