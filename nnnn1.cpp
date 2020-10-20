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

ll myfun(ll set[], ll n){  
    ll index = 0; 
  
    for (auto i = 31; i >= 0; i--) {  
        ll maxInd = index, maxEle = INT_MIN; 
        for (auto j = index; j < n; j++){ 
            if ( (set[j] & (1 << i)) != 0 && set[j] > maxEle ) 
                maxEle = set[j], maxInd = j; 
        }  
        if (maxEle == INT_MIN) 
        continue; 
        swap(set[index], set[maxInd]);  
        maxInd = index; 
        for (auto j=0; j<n; j++){ 
            if (j != maxInd && 
               (set[j] & (1 << i)) != 0) 
                set[j] = set[j] ^ set[maxInd]; 
        } 
        index++; 
    } 
    ll res = 0; 
    for (auto i = 0; i < n; i++) res ^= set[i]; 
    return res; 
} 

void virus(){
          ll len;
          cin>>len;
          ll arr[len];
          for(auto i=0; i<len; i++) cin>>arr[i];
          cout<<myfun(arr,len);
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