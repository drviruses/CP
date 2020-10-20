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

bool mysort(pair<ll,ll> a, pair<ll,ll> b){
    if(a.first == b.first) return a.second > b.second;
    return a.first < b.first; 
}

void virus(){
          ll len, k;
          cin>>len>>k;
          vector<ll> A(len), B(len);
          for(auto &i:A) cin>>i;
          for(auto &i:B) cin>>i;
          vector<pair<ll,ll>> arr;
          for(auto i=0; i<len; i++){
              arr.push_back({A[i],B[i]});
          }
          sort(all(arr),mysort);
          vector<pair<ll,ll>> ans;
          ans.push_back({arr[0].first,arr[0].second});
          multiset<ll,greater<ll>> temp;
          temp.insert(arr[0].second);
          for(auto i=1; i<len; i++){
              ll till = min(k,(ll)temp.size());
              ll sum = 0ll;
              for(auto i=temp.begin(); i != temp.end() and till; i++,till--) sum += *i;
              ans.push_back({arr[i].first,arr[i].second+sum});
              temp.insert(arr[i].second);
          }
          unordered_map<ll,ll> str;
          for(auto i:ans) str[i.first] = i.second;
          for(auto i:A) cout<<str[i]<<" ";
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