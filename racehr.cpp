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


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
 /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */

    ll t;
    cin>>t;
    while(t--){
         ll n;
         cin>>n;
         ll s[n];
         vector<ll> c_diff;
         for(auto i=0;i<n;i++) cin>>s[i];
         sort(s,s+n);
         for(auto i=1;i<n;i++) c_diff.emplace_back(s[i]-s[i-1]);
         cout<<*min_element(c_diff.begin(),c_diff.end())<<endl;
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}