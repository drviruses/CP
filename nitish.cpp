
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

ll binarySearch(string arr, ll l, ll r, char x) 
{ 
    while (l <= r) { 
        ll m = l + (r - l) / 2; 
        if (arr[m] == x) return m; 
        if (arr[m] < x) l = m + 1; 
        else r = m - 1; 
    } 
    return -1; 
}


void virus(){
          string s;
          cin>>s;
          char f;
          cin>>f;
          cout<<binarySearch(s,0,(ll)s.size()-1,f);
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