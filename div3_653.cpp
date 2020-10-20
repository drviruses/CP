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
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

void factorize(ll n) 
{ 
    ll count = 0;  
    while (!(n % 2)) { 
        n >>= 1; 
        count++; 
    } 
    ll cnt2 = count, cnt3 = 0;
    for (auto i = 3; i <= sqrt(n); i += 2) { 
        count = 0; 
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if(i == 3) cnt3 = count;
        else{
            cout<<"-1\n"; return;
        }
    } 
    if(n == 3) cnt3 += 1;
    if (n > 2 and n != 3) {
        cout<<"-1\n"; return;
    }
    if(cnt2 > cnt3){
        cout<<"-1\n"; return;
    }
    else cout<<cnt3 + (cnt3 - cnt2)<<endl;
} 

void virus(){
       ll num;
       cin>>num;
       if(num == 1){
           cout<<"0\n"; return;
       }
       factorize(num);
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
         //cout << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}