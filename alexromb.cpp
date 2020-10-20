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

        ll n;
        cin>>n;
        /*
        2*(  (( n-1 )*2 + 1) + ((n-1)*((n-1)*2+1)) - ((n*(n-1))) )
        Firstly I have only considered the upper half of rhombus, and calculated the number of box required to form the n X n box
        Then subtracted the number of boxes from each level as  they were forming an AP 2,4,6,8,.......
        ~dr_virus
        */

        cout<<2*(  (( n-1 )*2 + 1) + ((n-1)*((n-1)*2+1)) - ((n*(n-1))) ) -  ((n-1)*2+1);     
        //your code goes here
    }

    return 0;
}