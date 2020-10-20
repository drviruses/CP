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
          ll n,sum_1=0,sum_2=0;
          cin>>n;
          ll arr_1[n],arr_2[n];
          for(auto i=0;i<n;i++) cin>>arr_1[i];
          for(auto i=0;i<n;i++) cin>>arr_2[i];
          vector<ll> sub;
          for(auto i=0;i<n;i++){
              if(arr_1[i]!=0){
                  sub.push_back(floor((double)arr_2[i]/(double)arr_1[i]));
              }
          }
          sort(sub.begin(),sub.end());
          cout<<sub[0]<<endl;
        //your code goes here
    }

    return 0;
}