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
         clock_t start,end;
         ll n;
         cin>>n;
         ll arr[n];
         for(auto i=0;i<n;i++) cin>>arr[i];
         start=clock();
         ll min=arr[0],max=arr[0],amz=0;
         for(auto i=1;i<n;i++){
             if(arr[i]>max){
                 amz+=1;
                 max=arr[i];
             }
             if(arr[i]<min){
                 amz+=1;
                 min=arr[i];
             }
         }
         end = clock();
         cout<<amz;
        
        cout<<endl<<fixed<<(ld)(end-start)/(ld)(CLOCKS_PER_SEC)<<setprecision(5)<<endl; 
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}