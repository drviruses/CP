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
         vector<ll> arr(n),pr(n),suf(n);
         ll m_n=INT_MAX,pos=0;
         for(auto i=0;i<n;i++){
             cin>>arr[i];
             if(arr[i]<m_n){
                 m_n=arr[i];
                 pos=i;
             }
         }
         /* pr[0]=arr[0];
         //prefix sum
         for(auto i=1;i<n;i++){
             pr[i]=arr[i]+pr[i-1];
         }
         suf[n-1]=arr[n-1];
         //suffix sum
         for(auto i=n-2;i>=0;i--){
             suf[i]=arr[i]+suf[i+1];
         }
         vector<ll> c_sum(n);
         ll m_n=INT_MAX,pos=0;
         for(auto i=0;i<n;i++){
             c_sum[i]=pr[i]+suf[i];
             if(c_sum[i]<m_n){
                 m_n=c_sum[i];
                 pos=i;
             }
         } */
         cout<<pos+1<<endl;
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}