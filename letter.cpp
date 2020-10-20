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
           ll n,m,sum=0;
           cin>>n>>m;
           vector<ll> domroom(n+1,0);
           vector<ll> letter(m);
           for(auto i=1;i<n+1;i++){
               cin>>domroom[i];
               domroom[i]+=sum;
               sum=domroom[i];
           }
           for(auto i=0;i<m;i++) cin>>letter[i];

           for(auto i=0;i<m;i++){ 
           ll pos=lower_bound(domroom.begin(),domroom.end(),letter[i])-domroom.begin();
           cout<<pos<<" "<<abs(domroom[pos-1]-letter[i])<<endl;
           }
        
        //your code goes here
    }

    return 0;
}