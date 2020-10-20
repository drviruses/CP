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
        ll nodes,len;
        cin>>nodes>>len;
        ld nodes_arr[nodes];
        for(auto i=0;i<nodes;i++) cin>>nodes_arr[i];
        sort(nodes_arr,nodes_arr+nodes);
        ld mx_len=INT_MIN;
        for(auto i=1;i<nodes;i++){
            mx_len=max(mx_len,(nodes_arr[i]-nodes_arr[i-1]));
        }
        cout<<fixed<<setprecision(10)<<max(mx_len/2,max(nodes_arr[0]-0,len-nodes_arr[nodes-1]));

        //your code goes here
    }

    return 0;
}