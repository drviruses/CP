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
            unordered_map<ll,ll> cnt;
           ll n;
           cin>>n;
           if(n==1){
               ll t;
               cin>>t;
               cout<<"0\n";
           }
           else{
               ll arr[n];
                for(ll i=0;i<n;i++){
                    cin>>arr[i];
                    cnt[arr[i]]+=1;
                } 
                ll m_x=INT_MIN,uniq=0;
                for(ll i=0;i<n;i++){
                    if(cnt[arr[i]]!=-1){
                        m_x=max(m_x,cnt[arr[i]]);
                        cnt[arr[i]]=-1;
                        uniq+=1;
                    }
                }
                //cout<<uniq<<" "<<m_x<<endl;
                if(uniq==m_x) cout<<m_x-1<<endl;
                else if(uniq<m_x) cout<<uniq<<endl; 
                else cout<<m_x<<endl;
                    
           }
        //your code goes here
    }

    return 0;
}