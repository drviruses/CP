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
         ll arr[n],car=0,c_3=0,c_2=0,c_1=0;
         for(auto i=0;i<n;i++){
              cin>>arr[i];
              if(arr[i]==4) car+=1;
              else if(arr[i]==3) c_3+=1;
              else if(arr[i]==2) c_2+=1;
              else c_1+=1;
         }  
         car+=(c_3);
         c_1=abs(c_3-c_1);
         
         cout<<car+()
        //your code goes here
    }

    return 0;
}