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

ll sum(ll n){
    ll su_m=0;
    while(n!=0){
        su_m+=(n%10);
        n/=10;
    }
    return su_m;
}


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
        ll k;
        cin>>k;
        /* ll n_zero=(k-1)/9;
        string patt[9]={"19","28","37","46","55","64","73","82","91"};
        cout<<patt[k%9-1][0];
        for(auto i=0;i<n_zero;i++) cout<<"0";
        cout<<patt[k%9-1][1]; */
        ll cnt=18;
        while (k!=0)
        {
            cnt+=1;
            if(sum(cnt)==10) k-=1;
            /* code */
        }
        cout<<cnt;
        //your code goes here
    }

    return 0;
}