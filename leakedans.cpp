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
           ll n,m,k,cntr=1;
           cin>>n>>m>>k;
           ll c[n][k];
           for(auto i=0;i<n;i++){
               for(auto j=0;j<k;j++){
                   cin>>c[i][j];
               }
           }
            if(m==1){
                for(auto i=0;i<n;i++) cout<<"1"<<" ";
                cout<<endl;
            }
            else{

                    map<ll,ll> ma_p;
                    for(auto i=1;i<=m;i++){
                        ma_p.insert({i,0});
                    }
                    
                    for(auto i=0;i<n;i++){
                        cntr=(cntr==m+1)?1:cntr;
                        for(auto j=0;j<k;j++){
                            ma_p[c[i][j]]+=1;   
                        }
                        cout<<cntr<<" ";   
                        ll max_m=INT_MIN,lc;
                        for(auto i=ma_p.begin();i!=ma_p.end();i++){
                            if(i->second>max_m){
                                max_m=i->second;
                                lc=i->first;
                            }
                        }
                        for(auto i=1;i<=m;i++) ma_p[i]=0;
                        cntr+=1;
                    }
                        
                   cout<<endl;
            }   
            
        //your code goes here
    }

    return 0;
}