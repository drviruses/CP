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

    ll t;
    cin>>t;
    while(t--){
         ll n,cntr=0,x_c=0,y_c=0;
         cin>>n;
         string s;
         cin>>s;
         for(auto i=0;i<s.size();i++){
             if(s[i]=='U' && cntr!=1){
                 y_c+=1,cntr=1;
             }
             else if(s[i]=='D' && cntr!=1){
                 y_c-=1,cntr=1;
             }
             else if(s[i]=='R' && cntr!=2){
                 x_c+=1,cntr=2;
             }
             else if(s[i]=='L' && cntr!=2){
                 x_c-=1,cntr=2;
             }
         }
         cout<<x_c<<" "<<y_c<<endl;
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}