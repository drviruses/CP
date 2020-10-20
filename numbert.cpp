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

vector<pair<ll,ll>> factor_arr;

void myfactor(ll num){
    ll cnt = 0;
    while(!(num%2)){
        num >>= 1; cnt++;
    }
    if(cnt) factor_arr.push_back({2,cnt});
    for(auto i=3; i<=sqrt(num); i+=2){
        cnt = 0;
        while(!(num%i)){
            num /= i; cnt++;
        }
        if(cnt) factor_arr.push_back({i,cnt});
    }
    if(num > 2) factor_arr.push_back({num,1});
}

void virus(){
          ll num;
          while(cin >> num){
                if(num == 1){
                    cout<<0<<endl;
                    continue;
                }
                factor_arr.clear();
                myfactor(num);
                ll eulerT = num, factor = 1;
                /* 
                num * (1 - (1/p1))
                */
                for(auto i:factor_arr){
                    eulerT *= (i.first - 1);
                    eulerT /= i.first;
                    factor *= (i.second + 1);
                }
                //cerr<<eulerT<<" "<<factor<<endl;
                cout<<(ll) (num - ( (eulerT-1) + factor) )<<endl;
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

    ll t = 1;
    //cin>>t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
           //cerr << "\n Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}