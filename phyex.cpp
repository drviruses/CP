/*
    @uthor: Amit Kumar
    user: dr_virus_
    *code and let others code too*
*/
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
#define ln mp::cpp_int;
#define ll long long
#define ld long double
#define pp pair<ll,ll>
#define endl "\n"
#define nfrep(a) for(size_t i=0;i<a;i++)
#define frep(a,b) for(size_t i=a;i<=b;i++)
#define nbrep(a) for(size_t i=a;i>=0;i--)
#define brep(a,b) for(size_t i=a;i>=b;i--)
using namespace std;
const int mod = 1e9+7;
const ld INF=1e10;

ld dist(ll x1,ll y1,ll x2,ll y2){
    ld dx=abs(x1-x2);
    ld dy=abs(y1-y2);
    return sqrt(dx*dx + dy*dy);
}

const int N=5010;
int a[N],b[N],c[N],d[N],e[N],f[N];
ld ab1[N],ab2[N],cd1[N],cd2[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ll t;
    cin>>t;
    while(t--){
        ll x,y,n,m,k;
        cin>>x>>y>>n>>m>>k;
        frep(1,n) cin>>a[i]>>b[i];
        frep(1,m) cin>>c[i]>>d[i];
        frep(1,k) cin>>e[i]>>f[i];

        
        // your code goes here
    }
    
    return 0;
}