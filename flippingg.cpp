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

ll max_sum(ll dp[], ll n){
    ll max_so_far=0,max_till_now=0;
    for(auto i=0;i<n;i++){
        max_till_now+=dp[i];
        if(max_till_now<0) max_till_now=0;
        if(max_so_far<max_till_now) max_so_far=max_till_now;
    }
    return max_so_far;
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
         ll n,sum=0;
         cin>>n;
         
         ll dp[n]={0};
         vector<ll> arr(n);
         for(auto i=0;i<n;i++){
             ll t;
             cin>>t;
             arr.push_back(t);
             if(t==1){ 
             sum+=1;
             dp[i]=-1;
             }
             else{
                 dp[i]=1;
             }
         }
         if(sum==n) cout<<sum-1<<endl;
         else cout<<sum+max_sum(dp,n)<<endl;
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}