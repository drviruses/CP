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
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 

    ll t;
    cin>>t;
    while(t--){
           ll num_car;
           cin>>num_car;
           ll price_car[num_car];
           for(auto i=0;i<num_car;i++) cin>>price_car[i];
           sort(price_car,price_car+num_car,greater<ll>());
           ll ans=0;
           for(auto i=0;i<num_car;i++){
               ans+=((price_car[i]-i)>0)? (price_car[i]-i) : 0;
           }
           cout<<ans%mod<<endl;

        //your code goes here
    }

    return 0;
}