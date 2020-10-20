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
    
    ll t;
    cin>>t;
    while(t--){
           ll n;
           cin>>n;
           vector<ll> g,op;
           for(auto i=0;i<n;i++){
               ll t;
               cin>>t;
               g.push_back(t);
           }
           for(auto i=0;i<n;i++){
               ll t;
               cin>>t;
               op.push_back(t);
           }
            
           ll cnt=0,j=0;
           sort(g.begin(),g.end());
           sort(op.begin(),op.end());
           for(auto i=0;i<n;i++){
               if(g[i]<=op[j]) continue;
               
               else{
                   cnt+=1;
                   j+=1;
               }
           }
           cout<<cnt<<endl;
        //your code goes here
    }

    return 0;
}