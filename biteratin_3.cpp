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

void virus(){
       ll len,k;
       cin>>len>>k;
       vector<ll> arr(len);
       vector<ll> e,o;
       ll et = 0;
       for(auto &i:arr) {
           cin>>i;
           if(i&1) o.push_back(et+1);
           else e.push_back(et+1);
           et += 1;
       }
       o.insert(o.begin(),0);
       e.insert(e.begin(),0);
       bool poss_1 = true, poss_2 = true;
       for(auto i=1;i<e.size();i++){
           if((e[i] - e[i-1]) > k){
               poss_1 = false; break;
           }
       }
       for(auto i=1;i<o.size();i++){
           if((o[i] - o[i-1]) > k){
               poss_2 = false; break;
           }
       }
       if(!poss_1 and !poss_2){
           cout<<"-1\n";
       }
       else{
           ll jump_1 = 0, jump_2 = 0;
           ll itr = k;
           bool poss_1 = false, poss_2 = false;
           for(auto i=1;i<e.size();i++){
               if((len - e[i] - 1) <= k) { jump_1 += 1; poss_1 = true; break;}
               if((e[i] - e[i-1]) < itr) continue;
               else{
                   jump_1 += 1, itr = k, i -= 1;
               }
           }
            itr = k;
            for(auto i=1;i<o.size();i++){
               if((len - o[i] - 1) <= k) { jump_2 += 1; poss_2 = true; break;}
               if((o[i] - o[i-1]) < itr) continue;
               else{
                   jump_2 += 1, itr = k, i -= 1;
               }
           }
           cout<<min(jump_1,jump_2)+1<<endl;
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