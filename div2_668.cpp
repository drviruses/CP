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
    ll len,k;
    cin>>len>>k;
    string seq;
    cin>>seq;
    ll zero = 0, one = 0;
    for(auto i=0; i<k; i++){
        ll enc = -1;
        for(auto j=i; j<len; j+=k){
            if(seq[j] != '?'){
                if(enc != -1 and seq[j] - '0' != enc){
                    cout<<"NO\n"; return;
                }
                enc = seq[j] - '0';
            }
        }
        if(enc != -1) (enc == 0)? zero++ : one++;
    }
    if(one > (k/2) or zero > (k/2)){
        cout<<"NO\n"; return;
    }
    cout<<"YES\n";
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