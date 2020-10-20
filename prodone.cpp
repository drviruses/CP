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
        ll cnt_ne=0,cnt_0=0;
        ll arr[len],d_p[len];
        
        for(auto i=0;i<len;i++) d_p[i]=1;

        for(auto i=0;i<len;i++){
            cin>>arr[i];
            if(arr[i]<0) {cnt_ne+=1; d_p[i]=-1;}
            else if(arr[i]==0) cnt_0+=1;
        }

        if( cnt_0>=1 && (cnt_ne%2!=0)){
            for(auto i=0;i<len ;i++){
                if(arr[i]==0) {d_p[i]=-1; break;}
            }
        }
        else if( cnt_0==0 && (cnt_ne%2!=0)){
            for(auto i=0;i<len ;i++){
                if(arr[i]<0) {d_p[i]=1; break;}
            }
        }

        ll sum=0;
        for(auto i=0;i<len;i++){
            sum+=abs(d_p[i]-arr[i]);
        }  
        cout<<sum;
        //your code goes here
    }

    return 0;
}