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
        ll len;
        cin>>len;
        ll arr[len];
        vector<ll> cop_y;
        for(auto i=0;i<len;i++){
            cin>>arr[i];
            cop_y.push_back(arr[i]);
        }
        
        
        vector<ll>::iterator itr;
        itr=cop_y.begin();

        vector<ll> f_mx;

        ll max_m=INT_MIN;
        for(auto i=1;i<len-1;i++){
            //cout<<"A";
            cop_y.erase(itr+i);
            for(auto j=0;j<cop_y.size()-1;j++){
                max_m=max(max_m,abs(cop_y[j]-cop_y[j+1]));
            }
            f_mx.push_back(max_m);
            cop_y.clear();
            for(auto k=0;k<len;k++) cop_y.push_back(arr[k]);
            itr=cop_y.begin();
        }

        sort(f_mx.begin(),f_mx.end());
        cout<<f_mx[0]<<endl;

        //your code goes here
    }

    return 0;
}