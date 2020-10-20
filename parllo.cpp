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
        ll fr,sd,th;
        cin>>fr>>sd>>th;
        /*
        let the three sharing sides be a,b,c
        fr = a*b -------->eq1
        sd = b*c -------->eq2
        th = c*a -------->eq3
        so from equation 1 and 2 (multiply):
        b^2  * c * a = fr*sd --------> eq4
        divide eq 4 with eq3
         b^2 = fr * sd /th
            */
        ll a = sqrt((fr*sd)/th);
        ll b = sqrt((sd*th)/fr);
        ll c = sqrt((th*fr)/sd);
        cout<<4 * (a+b+c);
        //your code goes here
    }

    return 0;
}