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

    ll t,sum_m=0,sum_c=0;
    cin>>t;
    while(t--){
           ll m,c;
           cin>>m>>c;
           if(m>c) sum_m+=1;
           else if(m<c) sum_c+=1;
           else continue;
        //your code goes here
    }
    //cout<<sum_m<<" "<<sum_c<<endl;
    if(sum_m>sum_c) cout<<"Mishka";
    else if(sum_m<sum_c) cout<<"Chris";
    else cout<<"Friendship is magic!^^";

    return 0;
}