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

ll popcount(ll num){
    num = num - ((num >> 1) & 0x55555555);
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    return ((num + (num >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}

vector<pair<ll,ll>> prime_pow;
void sieveOfEratosthenes(ll N, ll s[]){ 
    vector <bool> prime(N+1, false); 
    for (ll i=2; i<=N; i+=2) 
        s[i] = 2;  
    for (ll i=3; i<=N; i+=2) { 
        if (prime[i] == false) {  
            s[i] = i;  
            for (ll j=i; j*i<=N; j+=2) { 
                if (prime[i*j] == false) { 
                    prime[i*j] = true; 
                    s[i*j] = i; 
                } 
            } 
        } 
    } 
} 
void primefactor(ll N){ 
    ll s[N+1];  
    sieveOfEratosthenes(N, s); 
    ll curr = s[N], cnt = 1;    
    while (N > 1){ 
        N /= s[N];  
        if (curr == s[N]) { 
            cnt++; 
            continue; 
        } 
        prime_pow.push_back({curr,cnt});  
        curr = s[N], cnt = 1; 
    } 
}

bool mysort(pair<ll,pair<ll,ll>> A, pair<ll,pair<ll,ll>> B){
    if(A.second.first == B.second.first and A.second.second == B.second.second)
            return A.first > B.first;
    if(A.second.second == B.second.second){
            return A.second.first > B.second.first;
    }
    return A.second.second < B.second.second;
}

void virus(){
        ll len;
        cin>>len;
        vector<pair<ll,pair<ll,ll>>> arr;
        for(auto i=1; i<=len; i++){
            ll book,toy;
            cin>>book>>toy;
            arr.push_back({i,{book,toy}});
        }
        sort(arr.begin(),arr.end(),mysort);
        for(auto i:arr) cout<<i.first<<" ";
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ll t=1;
    //cin>>t;
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