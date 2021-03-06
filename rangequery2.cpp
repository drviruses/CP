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
const ll mx = 2e5+1;
ll block[mx];
ll blksz;

void update(ll *arr, ll indx, ll val){
    block[(indx-1)/blksz] += val - arr[indx-1];
    arr[indx-1] = val;
    return;
}

ll query(ll arr[], ll ini, ll fnl){
    ll sum = 0;
    while(ini<fnl and ini%blksz != 0 and ini != 0) sum += arr[ini], ini++;
    while(ini+blksz <= fnl) sum += block[ini/blksz], ini += blksz;
    while(ini<=fnl) sum += arr[ini], ini++;
    return sum; 
}

void prepro(ll arr[],ll len){
    blksz = sqrt(len);
    ll indx = -1;
    for(auto i=0; i<len; i++){
        if(!(i%blksz)) indx++;
        block[indx] += arr[i];
    }
}

void virus(){
        ll len,q;
        cin>>len>>q;
        ll arr[len];
        for(auto i=0; i<len; i++) cin>>arr[i];
        prepro(arr,len);
        while(q--){
            ll type, x, y;
            cin>>type>>x>>y;
            if(type == 1) update(arr,x,y);
            else cout<<query(arr,x-1,y-1)<<endl;
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