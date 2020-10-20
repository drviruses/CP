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

bool tri(ll a,ll b,ll c){
    return ((a+b>c)&&(a+c>b)&&(b+c)>a);
}

bool segm(ll a,ll b,ll c){
    return ((a+b==c)||(a+c==b)||(b+c==a));
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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        bool ntriangle=false,segmnt=false;
        ntriangle=ntriangle||tri(a,b,c);
        ntriangle=ntriangle||tri(a,b,d);
        ntriangle=ntriangle||tri(a,d,c);
        ntriangle=ntriangle||tri(d,b,c);

        segmnt=segmnt||segm(a,b,c);
        segmnt=segmnt||segm(a,b,d);
        segmnt=segmnt||segm(a,d,c);
        segmnt=segmnt||segm(d,b,c);

        if(ntriangle) cout<<"TRIANGLE";
        else if(segmnt) cout<<"SEGMENT";
        else cout<<"IMPOSSIBLE";
        //your code goes here
    }

    return 0;
}