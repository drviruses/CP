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
#define pp pair<ll,ll>
#define endl "\n"
#define nfrep(a) for(size_t i=0;i<a;i++)
#define fnrep(a,b) for(size_t i=a;i<=b;i++)
#define nbrep(a) for(size_t i=a;i>=0;i--)
#define bnrep(a,b) for(size_t i=a;i>=b;i--)

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
         ll x,y;
         cin>>x>>y;
         bool x_n = (x<0)?true:false;
         bool y_n = (y<0)?true:false;
         ll sum = abs(x)+abs(y);

         if(!x_n && !y_n) cout<<"0 "<<sum<<" "<<sum<<" 0";
         else if(!x_n && y_n) cout<<"0 -"<<sum<<" "<<sum<<" 0";
         else if(x_n && !y_n) cout<<"-"<<sum<<" 0 0 "<<sum;
         else cout<<"-"<<sum<<" 0 0 -"<<sum;
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}