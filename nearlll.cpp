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
        string s;
        cin>>s;
        ll lc=0;
        for(auto i=0;i<s.size();i++){
            if(s[i]=='4' || s[i]=='7') lc+=1;
        } 
        string cp=to_string(lc);
       // cout<<cp<<endl;
        bool f=false;
        for(auto i=0;i<cp.size();i++) {
            if( cp[i]=='4' || cp[i]=='7' ) { }
            else {
                f=true;
                break;
            }
        }
        if(f) cout<<"NO";
        else cout<<"YES";
        //your code goes here
    }

    return 0;
}