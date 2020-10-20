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
         ll m,x,y;
         cin>>m>>x>>y;
         ll arr[m];
         for(auto i=0;i<m;i++) cin>>arr[i];
         sort(arr,arr+m);
         vector<ll> lim;
         for(auto i=0;i<m;i++){
             lim.push_back(arr[i]-(x*y));
             lim.push_back(arr[i]+(x*y));
         }
         ll emp_h=0;
         for(auto i=1;i<lim.size()-1;i+=2){
             if(lim[i+1]>lim[i]) emp_h+=(lim[i+1]-lim[i]-1);
         }
         if(lim[0]>1) emp_h+=(lim[0]-1);
         if(lim[lim.size()-1]<100) emp_h+=(100-lim[lim.size()-1]);
         cout<<emp_h<<endl;
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}