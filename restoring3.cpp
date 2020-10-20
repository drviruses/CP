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
         ll arr[4];
         for(auto i=0;i<4;i++) cin>>arr[i];
         sort(arr,arr+4);
         ll x_1=arr[0],x_2=arr[1],x_3=arr[2],x_4=arr[3];
         ll a=(x_1-(2*x_2)+x_3+x_4)/3,b=(x_1+x_2-(2*x_3)+x_4)/3,c=(x_2+x_3+x_4-(2*x_1))/3;
         cout<<a<<" "<<b<<" "<<c;  
        //your code goes here
    }

    return 0;
}