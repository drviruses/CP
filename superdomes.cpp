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
const ll mx = 1e6+1;

bool isPalinStr(string num){
    string a = num;
    reverse(a.begin(), a.end());
    if(num == a) return true;
    return false;
}

bool isPalinNum(ll num){
    string a = to_string(num);
    string b = a;
    reverse(b.begin(), b.end());
    if(a == b) return true;
    return false;
}

vector<ll> dp(mx,0);

void virus(){
          ll num;
          cin >> num;
          cout << dp[num] << endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    for(auto i=1; i<mx; i++){
        if(isPalinNum(i)){
            auto bin = bitset<30>(i);
            string seq = bin.to_string();
            reverse(all(seq));
            string act = seq.substr(0,log2(i) + 1);
            if(isPalinStr(act)) dp[i] = 1;
        }
    }
    partial_sum(all(dp), dp.begin());
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