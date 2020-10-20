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
          long long bun,pet,cut,ham,chi;
         cin>>bun>>pet>>cut>>ham>>chi;
         if(((pet*2)+(cut*2))<=bun)
            cout<<(ham*pet) + (chi*cut)<<endl;
         else{
             ll pair = floor(bun/2);
             ll c=0;
             if(max(ham,chi)==ham){
                 c+=(ham*min(pet,pair));
                 unsigned long long lft = pair-min(pet,pair);
                 c+=(lft*chi);
                 cout<<c;
             }
             else{
                 c+=(chi*min(cut,pair));
                 unsigned long long lft = (pair-min(cut,pair));
                 c+=(lft*ham);
                 cout<<c;
             }
             cout<<endl;
         }    
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}