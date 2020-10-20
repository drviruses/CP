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

vector< pair<ll, ll> > fun(ll arr[], ll n) { 
    map<ll, vector<ll> > str; 
    vector <pair<ll, ll>> out;  
    ll sum = 0; 
    for (auto i = 0; i < n; i++) {  
        sum += arr[i];  
        if (sum == 0) 
            out.push_back(make_pair(0, i)); 
        if (str.find(sum) != str.end()) { 
            vector<ll> vc = str[sum]; 
            for (auto it = vc.begin(); it != vc.end(); it++) 
                out.push_back(make_pair(*it + 1, i)); 
        } 
        str[sum].push_back(i); 
    } 
    return out; 
} 

void virus(){
          ll len;
          cin >> len;
          ll arr[len];
          for(auto i=0; i<len; i++) cin >> arr[i];
          vector<pair<ll,ll>> ans = fun(arr,len);
          set<ll> a,b;
          for(auto i:ans) {a.insert(i.first); b.insert(i.second);}
          cout<<min((ll)a.size(),(ll)b.size())<<endl;
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