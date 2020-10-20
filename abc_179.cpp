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

const ll mod = 998244353;
const ll inf = 1e18;

vector<pair<ll,ll>> factor_arr;

void myfactor(ll num){ 
    ll count = 0;   
    while (!(num % 2)) { 
        num >>= 1; count++; 
    }  
    if (count) factor_arr.push_back({2,count}); 
    for (auto i = 3; i <= sqrt(num); i += 2) { 
        count = 0; 
        while (num % i == 0) { 
            count++; 
            num /= i; 
        } 
        if (count) factor_arr.push_back({i,count}); 
    } 
    if (num > 2) factor_arr.push_back({num,1});
}

ll mycoin(vector<ll>& arr, ll m, ll n){
    ll i, j, x, y; 
    ll table[n + 1][m]; 
    
    for (i = 0; i < m; i++) 
        table[0][i] = 1; 

    for (i = 1; i < n + 1; i++){ 
        for (j = 0; j < m; j++){ 
            x = (i-arr[j] >= 0) ? (table[i - arr[j]][j]) : 0;  
            y = (j >= 1) ? (table[i][j - 1]) : 0; 
            table[i][j] = ((x) + (y)); 
        } 
    } 
    return table[n][m - 1]; 
}

void virus(){
        ll num, s;
        cin >> num >> s;
        set<ll> uniq;
        for(auto i=0; i<s; i++){
            ll a, b;
            cin >> a >> b;
            uniq.insert(a); uniq.insert(b);
        }
        vector<ll> arr(all(uniq));
        sort(all(arr));
        cout<<mycoin(arr, (ll)arr.size(), num-1)%mod;
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