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
        ll num;
        cin>>num;
        ll arr[num];
        for(auto i=0;i<num;i++) cin>>arr[i];
        
        ll sum=0;
        vector<ll> p,n;
        for(auto i=0;i<num;i++){
            
            if(arr[i]>0){ 
                if(n.size()!=0){
                    sort(n.begin(),n.end(),greater<ll>());
                    sum+=n[0];
                    //cout<<n[0]<<endl;
                    n.clear();
                }
                p.push_back(arr[i]);
            }
            else{
                if(p.size()!=0){
                    sort(p.begin(),p.end(),greater<ll>());
                    sum+=p[0];
                    //cout<<p[0]<<endl;
                    p.clear();
                }
                n.push_back(arr[i]);
            }
        }
        if(n.size()!=0){
            sort(n.begin(),n.end(),greater<ll>());
                    sum+=n[0];
                    //cout<<n[0]<<endl;
        }
        if(p.size()!=0){
            sort(p.begin(),p.end(),greater<ll>());
                    sum+=p[0];
                    //cout<<p[0]<<endl;
        }
        cout<<sum<<endl;
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}