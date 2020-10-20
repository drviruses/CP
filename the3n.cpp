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
        ll dp[1000001] = {0,1,2};
        ll cnt = 0;
        for(auto i=3; i<1000001; i++){
            cnt = 0;
            ll j = i;
            while(j != 1){
                if(j&1){
                    j = ((3*j) + 1)/2;
                    cnt += 2;
                }
                else{
                    j/=2;
                    cnt += 1;
                }
                if(j<i){
                    cnt += dp[j];
                    break;
                }
            }
            dp[i] = cnt;
        }
        ll left, right;
        while(cin>>left>>right){
            cout<<left<<" "<<right<<" ";
            if(left > right) swap(left,right);
            ll mx = dp[right];
            for(auto i=right - 1; i >= left; i--) mx = max(dp[i],mx);
            cout<<mx<<endl;
        }
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    
    /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */
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