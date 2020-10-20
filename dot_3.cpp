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

bool possible(ll m,ll sum){
    return sum>=0 && sum<=(9*m);
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
         ll m,sum_;
         cin>>m>>sum_;
         if(possible(m,sum_)){
             ll sum=sum_;
             if(sum==0) {
                 if(m>1) cout<<"-1 -1";
                 else cout<<"0 0";
                 }
             else{
                 string min;
                 for(auto i=0;i<m;i++){
                     for(auto j=0;j<=9;j++){
                         if((i>0 || j>0 ||(m==1 && j==0)) && possible(m-i-1,sum-j)){
                             min+=char(j+'0');
                             sum-=j;
                             break;
                         }
                     }
                 }
                 sum=sum_;
                 string max;
                 for(auto i=0;i<m;i++){
                     for(auto j=9;j>=0;j--){
                         if(possible(m-i-1,sum-j)){
                             max+=char(j+'0');
                             sum-=j;
                             break;
                         }
                     }
                 }
             cout<<min<<" "<<max;
             }
         }
         else{
             cout<<"-1 -1";
         }
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}