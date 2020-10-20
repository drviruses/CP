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
          vector<ll> arr(len);
          for(auto &i:arr) cin >> i;
          ll till = (1<<len)-1;
          for(auto i=0; i<=till; i++){
              auto bin = bitset<17>(i);
              string seq = bin.to_string();
              reverse(all(seq));
              string act = seq.substr(0,len);
              //cout<<act<<endl;
              vector<ll> a, b;
              for(auto j=0; j<len; j++) if(act[j] == '1') a.push_back(arr[j]); else b.push_back(arr[j]);
              ll in1 = 0, in2 = 0;
              for (auto k = 0; k < (ll)a.size() - 1; k++){ 
                    for (int j = k + 1; j < (ll)a.size(); j++) 
                        if (a[k] > a[j])  in1++;
              }

              for (auto k = 0; k < (ll)b.size() - 1; k++){ 
                    for (int j = k + 1; j < (ll)b.size(); j++) 
                        if (b[k] > b[j]) 
                            in2++;
              }
              //cout<<in1<<" "<<in2<<endl;
              if(in1 == in2){
                  cout<<"YES\n"; return;
              }
          }
          cout<<"NO\n";
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