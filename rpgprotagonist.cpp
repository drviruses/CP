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
          ll fir_max_w, sec_max_w;
          cin>>fir_max_w>>sec_max_w;
          ll cntsword, cntaxe;
          cin>>cntsword>>cntaxe;
          ll sword_w, axe_w;
          cin>>sword_w>>axe_w;

          if(sword_w > axe_w){
              swap(cntsword,cntaxe);
              swap(sword_w,axe_w);
          }

          vector<ll> posssword(cntsword+1), possaxe(cntaxe+1);
          for(auto i=0; i<=cntsword; i++) posssword[i] = (i*sword_w);
          for(auto i=0; i<=cntaxe; i++) possaxe[i] = (i*axe_w);

          ll ans = 0;
          for(auto i=0; i<=cntsword; i++){

              auto itr1 = upper_bound(possaxe.begin(),possaxe.end(),fir_max_w - min(posssword[i],fir_max_w));
              auto itr2 = upper_bound(possaxe.begin(),possaxe.end(),sec_max_w - min(sec_max_w,(cntsword*sword_w - min(posssword[i],fir_max_w))));

              ll x, y;
              if(itr1 == possaxe.end()) x = cntaxe;
              else{
                  x = itr1 - possaxe.begin(); x -= 1;
              }
              if(itr2 == possaxe.end()) y = cntaxe;
              else{
                  y = itr2 - possaxe.begin(); y -= 1;
              }

              cerr<<x<<" "<<y<<endl;  

              ans = max(ans, min(posssword[i],fir_max_w)/sword_w  +  min(sec_max_w, (cntsword*sword_w - min(posssword[i],fir_max_w)))/sword_w
                         + min(cntaxe, x+y));
          }
          
          cout<<ans<<endl;

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