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
   /* ll arr[200000000];
    for(auto i=1;i<=200000000;i++){
        arr[i]=findtrzero(i);
    }*/
    ll t;
    cin>>t;
    while(t--){
           ll num,sum=0;
           cin>>num;
           while (num!=0)
           {
                sum+=(floor)(num/5);
                num=(floor)(num/5);
               /* code */
           }
           cout<<(ll)sum<<endl;
           //your code goes here
    }

    return 0;
}