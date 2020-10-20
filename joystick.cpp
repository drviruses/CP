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
         ll a,b;
         cin>>a>>b;
         if(a==1 && b==1) cout<<"0";
         else{
                ll sum=0;
                while(true){
                    if( a<1 || b<1 ) break;
                    else{
                        sum+=1;
                        if(a<=b){
                            a+=1;
                            b-=2;
                        }
                        else{
                            a-=2;
                            b+=1;
                        }
                    }
                }
                cout<<sum<<endl;
         } 
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}