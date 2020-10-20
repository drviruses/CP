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

vector<ll> sieve(1e6+1);
vector<bool> prime(1e6+1,false);

void fun_sieve(){
    ll n=1e6+1;
    for(auto i=2; i<=n; i+=2) sieve[i] = 2;
    for(auto i=3; i<=n; i+=2){
        if(!prime[i]){
            sieve[i] = i;
            for(auto j=i; j<=n; j+=i){
                if(!prime[j]){
                    prime[j] = true;
                    sieve[j] = i;
                }
            }
        }
    }

}
vector<ll> powr;

void myfactor(ll num){
        ll curr = sieve[num], cnt = 1;
        while(num > 1){
            num /= sieve[num];
            if(sieve[num] == curr){
                cnt++; continue;
            }
            powr.push_back(cnt+1);
            curr = sieve[num];
            cnt = 1;
        }
}

void virus(){
    powr.clear();
    ll num;
    cin>>num;
    myfactor(num);
    ll res = accumulate(powr.begin(),powr.end(),1,multiplies<ll>());
    cout<<res<<endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    fun_sieve();
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