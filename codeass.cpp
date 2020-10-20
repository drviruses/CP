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
const ll mx = 2e5+5;

void virus(){
    ll n,m;
    cin>>n>>m;
    ll mat[n][m], cnt[n][m];
    
    for(auto i=0; i<n; i++){
        string t;
        cin>>t;
        for(auto j=0; j<m; j++) mat[i][j] = (t[j] - '0'), cnt[i][j] = 0;
    }
    
    ll q;
    cin>>q;
    while(q--){
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        x1--, y1--, x2--, y2--;
        cnt[x1][y1]++;
        if((x2 + 1) < n and (y2 + 1) < m) cnt[x2+1][y2+1]++;
        if((x2+1) < n) cnt[x2+1][y1]--;
        if((y2+1) < m) cnt[x1][y2+1]--;
    }
    
    //Col wise sum
    for(auto i=0; i<n; i++){
        for(auto j=1; j<m; j++) cnt[i][j] += cnt[i][j-1];
    }

    //Row wise sum
    for(auto i=0; i<m; i++){
        for(auto j=1; j<n; j++) cnt[j][i] += cnt[j-1][i];
    }

    for(auto i=0; i<n; i++){
        for(auto j=0; j<m; j++){
            if(cnt[i][j]&1){
                if(mat[i][j] == 0) cout<<"1";
                else cout<<"0";
            }
            else cout<<mat[i][j];
        }
        cout<<endl;
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
           //cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}