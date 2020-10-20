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
#define endl "\n"

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
         ll n,m;
         cin>>n>>m;
         ll arr[n];
         for(auto i=0;i<n;i++) cin>>arr[i];
         sort(arr,arr+n);
         ll sum = 0;
         ll t_sum=0,itr=1;
         for(auto i=0;i<n-(m+(n%m));i++){
             if((i+1)%m==0) { sum+=(((t_sum+arr[i])*itr)%mod); itr+=1; t_sum=0;}
             else t_sum+=arr[i];
         }
         t_sum=0;
         for(auto i=n-(m+(n%m));i<n;i++) {
             t_sum+=arr[i];
         }
         sum+=((t_sum*itr)%mod);
         cout<<sum;
         
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}