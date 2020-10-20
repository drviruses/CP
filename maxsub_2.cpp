/*
    @uthor: Amit Kumar
    user: CodeChef: dr_virus_ ; Codeforces,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
using namespace std;
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll long long
#define ld double
#define endl "\n"

const ll mod = 1e9+7;
const ll inf = 1e18;

ll max_sub(ll arr[],ll n){
    ll mx_sf=0,mx_tn=0;
    for(auto i=0;i<n;i++){
        mx_tn+=arr[i];
        if(mx_tn<0) mx_tn=0;
        if(mx_sf<mx_tn) mx_sf=mx_tn;
    }
    return mx_sf;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
 /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */

    ll t=1;
    //cin>>t;
    while(t--){
         ll n;
         cin>>n;
         ll arr[n];
         for(auto i=0;i<n;i++) cin>>arr[i];
         cout<<max_sub(arr,n);
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}