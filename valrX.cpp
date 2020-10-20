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
        char arr[len][len];
        set<char> se_t;

        for(auto i=0;i<len;i++){
            for(auto j=0;j<len;j++){
                cin>>arr[i][j];
                se_t.insert(arr[i][j]);
            }
        } 

        if(se_t.size()!=2) cout<<"NO";
        else{
            bool f=true;
            char c_k=arr[0][0];
            for(auto i=0;i<len;i++){
                        for(auto j=0;j<len;j++){
                            if( i==j || (i+j)==(len-1)){
                                if(arr[i][j]!=c_k) {f=false; break;}
                            }
                            else{
                                if(arr[i][j]==c_k){f=false; break;}
                            }
                        }
            }            
            if(f) cout<<"YES";
            else cout<<"NO";
        }    
        //your code goes here
    }

    return 0;
}