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
    cin>>len;
    vector<ll> arr(len);
    for(auto &i:arr) cin>>i;
    if(is_sorted(arr.begin(),arr.end())){
        cout<<"YES\n";
    }
    else{
        ll mn = *min_element(arr.begin(),arr.end());
        vector<ll> t(arr.begin(),arr.end());
        sort(t.begin(),t.end());
        vector<ll> miss;
        for(auto i=0; i<len; i++){
            if(arr[i] != t[i]) miss.push_back(arr[i]);
        }
        bool y = false;
        for(auto i:miss){
            if(i%mn != 0){
                y = true;
                break;
            }
        }
        if(y) cout<<"NO\n";
        else cout<<"YES\n";
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