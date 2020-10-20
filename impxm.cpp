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
        ll stud, ques;
        cin>>stud>>ques;
        vector<string> patt(stud);
        for(auto &i:patt) cin>>i;

        vector<ll> arr(ques);
        for(auto &i:arr) cin>>i;
        ll mat[ques][5];
        for(auto i=0; i<ques; i++){
            for(auto j=0; j<5; j++) mat[i][j] = 0;
        }
        ll ans = 0;
        for(auto i=0; i<ques; i++){
            for(auto j=0; j<stud; j++){
                mat[i][patt[j][i] - 'A'] += 1;
            }
            ll mx = 0;
            for(auto k=0; k<5; k++){
                mx = max(mx,mat[i][k]);
            }
            ans += (arr[i]*mx);
        }
        cout<<ans;
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