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

const ll mx = 1000;
ll blkarr[mx];
ll blksz;

ll query(ll arr[], ll ini, ll fnl){
    ll mn = LLONG_MIN;
    while(ini<fnl and ini%blksz != 0 and ini != 0) mn = max(mn,arr[ini]), ini++;
    while(ini+blksz <= fnl) mn = max(mn,blkarr[ini/blksz]), ini += blksz;
    while(ini<=fnl) mn = max(mn,arr[ini]), ini++;
    return mn;
}

void prepro(ll arr[], ll len){
    blksz = sqrt(len);
    ll indx = 0, mn = arr[0];
    for(auto i=1; i<len; i++){
        if(!(i%blksz)) blkarr[indx++] = mn, mn = arr[i];
        else mn = max(mn,arr[i]);
    }
    blkarr[indx] = mn;
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

void virus(){
          ll n,w,k;
          cin>>n>>k>>w;
          vector<ll> L(k);
          for(auto &i:L) cin>>i;
          ll al, bl, cl, dl;
          cin>>al>>bl>>cl>>dl;
          ll H[n];
          for(auto i=0; i<k; i++) cin>>H[i];
          ll ah, bh, ch, dh;
          cin>>ah>>bh>>ch>>dh;
          for(auto i=k; i<n; i++){
              L.push_back((((al*L[i-2]) + (bl*L[i-1]) + cl) % dl)+1); 
              H[i] = ((((ah*H[i-2]) + (bh*H[i-1]) + ch) % dh)+1);
          }
          prepro(H,n);
          vector<ll> peri(n);
          for(auto i=0; i<n; i++) peri[i] = ((w + H[i])<<1);

          vector<ll> P(n);
          P[0] = peri[0];
          if(L[0] + w >= L[1]){
              P[1] = (max(H[0],H[1]) + abs(L[1]+w - L[0]))<<1;
          }
          else P[1] = P[0] + peri[1];

          for(auto i=2; i<n; i++){
              ll lw = lower_bound(L.begin(),L.end(),(L[i] - w)) - L.begin();
              if(lw != 0){
                  ll mh = query(H,lw-1,i-1);
                  P[i] = ((max(mh,H[i]) + abs(L[])))
              }
              else P[i] = peri[i];
              if(L[i] <= (L[i-1] + w)){
                  P[i] = P[i-2] + ((max(H[i],H[i-1]) + abs(L[i]+w - L[i-1]))<<1);
              }
              else P[i] = P[i-1] + peri[i];
          }
          for(auto i:P) cout<<i<<" ";
          cout<<endl;
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