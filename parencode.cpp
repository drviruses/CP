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

bool mysort(const pair<ll,ll>&a, const pair<ll,ll>&b ){
    return (a.second - a.first)>(b.second-b.first);
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
 /* #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif */

    ll t,c=1;
    cin>>t;
    while(t--){
           ll n;
           cin>>n;
           vector<pair<ll,ll>> vec(n);
           for(auto i=0;i<n;i++){
               cin>>vec[i].first;
               cin>>vec[i].second;
             }
            sort(vec.begin(),vec.end(),mysort); 
            ll f=0;
            for(auto i=1;i<n;i++){
                if(vec[i].first>vec[0].first && vec[i].second<vec[0].second){
                    f+=1;
                }
            }
            if(f>=2){
                cout<<"Case #"<<c<<": "<<"IMPOSSIBLE"<<endl;
            }
            else {
                char cr='J';
                cout<<"Case #"<<c<<": ";
                for(auto i=0;i<n;i++){
                    cout<<cr;
                    cr=(cr=='J')? 'C':'J';
                }
                cout<<endl;
            }
           c+=1;
        //your code goes here
    }

    return 0;
}