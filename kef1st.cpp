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
        ll arr[len];
        ll d_p[len];
        d_p[0]=1;

        for(auto i=0;i<len;i++)
            cin>>arr[i];

        for(auto i=1;i<len;i++){
            if(arr[i]>=arr[i-1])
                d_p[i]=1;
            else d_p[i]=-1;    
        }    
        int a
        vector<ll> ma_x;
        ll cnt=0;
        for(auto i=0;i<len;i++){
            if(d_p[i]==1) cnt+=1;
            else{
                ma_x.push_back(cnt);
                cnt=1;
            }
            if(i==len-1) {ma_x.push_back(cnt);}
        } 

        sort(ma_x.begin(),ma_x.end(),greater<ll>());
        cout<<ma_x[0];        
        //your code goes here
    }

    return 0;
}