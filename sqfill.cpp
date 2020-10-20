/*
    @uthor: Amit Kumar
    user --> GitHub: drviruses ; CodeChef: dr_virus_ ; Codeforces,AtCoder,Hackerearth,Hakerrank: dr_virus;
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
#define google(x) cout<<"\Case #"<<x<<"\:"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

ll popcount(ll num){
    num = num - ((num >> 1) & 0x55555555);
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    return ((num + (num >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}


void virus(){
        ll n, m;
        cin>>n>>m;
        ll mat[n][m];
        for(auto i=0; i<n; i++){
            for(auto j=0; j<m; j++) cin>>mat[i][j];
        }
        vector<pair<ll,ll>> ans;
        bool zero = false;
        for(auto i=0; i<n-1; i++){
            for(auto j=0; j<m-1; j++){
                if((mat[i][j] * mat[i+1][j] * mat[i+1][j+1] * mat[i][j+1]) > 0){
                    mat[i][j] = 2, mat[i+1][j] = 2, mat[i+1][j+1] = 2, mat[i][j+1] = 2;
                    ans.push_back({i+1,j+1});
                }
            }
        }
        for(auto i=0; i<n; i++)
            for(auto j=0; j<m; j++) if(mat[i][j] == 1) zero = true;
        
        if(zero) cout<<"-1\n";
        else{
            cout<<(ll)ans.size()<<endl;
            for(auto i: ans) cout<<i.first<<" "<<i.second<<endl;
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
         //cout << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}