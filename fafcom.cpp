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

    ll t=1;
    //cin>>t;
    while(t--){
         ll n,itr;
         cin>>n;
         itr = n;
         ll cnt = 0;
         for(auto i=1;i<=n/2;i++){
             if((itr - i)%i==0) cnt+=1;
         }
         cout<<cnt;
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}