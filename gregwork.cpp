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
        ll len;
        cin>>len;
        string ex[3]={"chest","biceps","back"};
        ll arr[len];
        ll time_ex[3]={0};
        for(auto i=0;i<len;i++){
            cin>>arr[i];
            time_ex[i%3]+=arr[i];
        }
        ll max_m=INT_MIN,loc;
        for(auto i=0;i<3;i++){
            if(time_ex[i]>max_m){
                max_m=time_ex[i];
                loc=i;
            }
        }
        cout<<ex[loc];   
        //your code goes here
    }

    return 0;
}