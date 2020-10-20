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

ll prim_arr[50]={0};
ll cum[50]={0};

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
 /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */

    prim_arr[2]=1;
    prim_arr[3]=1;
    prim_arr[5]=1;
    prim_arr[7]=1;
    prim_arr[11]=1;
    prim_arr[13]=1;
    prim_arr[17]=1;
    prim_arr[19]=1;
    prim_arr[23]=1;
    prim_arr[29]=1;
    prim_arr[31]=1;
    prim_arr[37]=1;
    prim_arr[41]=1;
    prim_arr[43]=1;
    prim_arr[47]=1;

    ll sum=0;
    for(auto i=1;i<50;i++){
        sum+=prim_arr[i];
        cum[i]=sum;

    }
    //for(auto i=0;i<50;i++) cout<<prim_arr[i]<<" ";
    ll t=1;
    //cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        if(n==2){
            if(m==3) cout<<"YES";
            else cout<<"NO";
        }
        else if(n==3){
            if(m==5) cout<<"YES";
            else cout<<"NO"; 
        }
        else{
                    if(prim_arr[m]==1){
                    //cout<<prim_arr[m]<<" "<<prim_arr[n];
                    if( cum[m]-cum[n]==1 ) cout<<"YES";
                    else cout<<"NO";
                    }
                    else cout<<"NO";
        
        }
        //your code goes here
    }

    return 0;
}