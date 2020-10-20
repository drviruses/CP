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
#define ll    int
#define ld    long double
#define ull   unsigned long long
#define endl "\n"
ll google_itr = 1;
#define google(x) cout<<"\Case #"<<x<<"\:"
#define pi 3.14159265358979323846264338327950L

ll popcount(ll num){
    num = num - ((num >> 1) & 0x55555555);
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    return ((num + (num >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}

ll len;
set<set<pair<ll,ll>>> uniq;
set<pair<ll,ll>> temp;
char mat[8][8];

bool isposs(ll i, ll j){
    if( i < 0 || i > (len-1) || j < 0 || j > (len-1)) return false;
    return true;
}

void myrec(ll ini_i, ll ini_j){
    temp.insert({ini_i,ini_j});
    if((ll)temp.size() == 7){
        uniq.insert(temp);
        temp.clear();
        return;
    }
    if(isposs(ini_i-1,ini_j) and mat[ini_i-1][ini_j] == 'X') myrec(ini_i-1,ini_j);
    if(isposs(ini_i+1,ini_j) and mat[ini_i+1][ini_j] == 'X') myrec(ini_i+1,ini_j);
    if(isposs(ini_i,ini_j-1) and mat[ini_i][ini_j-1] == 'X') myrec(ini_i,ini_j-1);
    if(isposs(ini_i,ini_j+1) and mat[ini_i][ini_j+1] == 'X') myrec(ini_i,ini_j+1);
    return;
}

void virus(){
        cin>>len;
        for(auto i=0; i<len; i++){
            for(auto j=0; j<len; j++) cin>>mat[i][j];
        }
        for(auto i=0; i<len; i++){
            for(auto j=0; j<len; j++){
                if(mat[i][j] == 'X'){
                    temp.clear();
                    myrec(i,j);
                }
            }
        }
        cout<<"aaa";
        cout<<uniq.size()<<endl;
        temp.clear(); uniq.clear();
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
