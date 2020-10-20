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
        ll n,k;
        cin>>n>>k;
        ll arr[n];
        for(auto i=0;i<n;i++) cin>>arr[i];
        ll max_1=*max_element(arr,arr+n);
        ll patt_1[n];
        for(auto i=0;i<n;i++){
            patt_1[i]=max_1-arr[i];
        }
        ll max_2=*max_element(patt_1,patt_1+n);
        ll patt_2[n];
        for(auto i=0;i<n;i++){
            patt_2[i]=max_2-patt_1[i];
        }
        if(k==0){
            for(auto i=0;i<n;i++) cout<<arr[i]<<" ";
        }
        else if(k&1){
            for(auto i=0;i<n;i++) cout<<patt_1[i]<<" ";
        }
        else if(k%2==0){
            for(auto i=0;i<n;i++) cout<<patt_2[i]<<" ";
        }
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}