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
            ll len;
            cin>>len;
            vector<char> peo(len);
            string s="",poss[5]={"11","101","1001","10001","100001"};
            for(auto i=0;i<len;i++){
                char temp;
                cin>>temp;
                peo.push_back(temp);
                s+=temp;
            }
            bool f=true;
            for(auto i=0;i<5;i++){
                size_t found = s.find(poss[i]);
                if(found != string::npos){
                    f=false;
                    break;
                }
            }
            if(f) cout<<"YES\n";
            else cout<<"NO\n";
        //your code goes here
    }

    return 0;
}