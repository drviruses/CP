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
           ll alpha,sum=0;
           string s;
           cin>>alpha;
           cin>>s;
           while (alpha--)
           {
               string beta;
               cin>>beta;
               if(beta[8]=='W'){
                   ll temp; cin>>temp;
                   sum+= 320 -(temp<20?temp:20);
               }
               else if(beta[8]=='R'){
                   sum+=300;
               }
               else if(beta[8]=='H'){
                   sum+=50;
               }
               else{
                   ll lower;
                   cin>>lower;
                   if(lower>=50 && lower<=1000) sum+=lower;
               }
               /* code */
           }
           if(s[0]=='I') cout<<sum/200<<endl;
           else cout<<sum/400<<endl;
           
        //your code goes here
    }

    return 0;
}