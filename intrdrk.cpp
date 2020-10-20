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

ll binSearch(ll cp[],ll l_l,ll u_p, ll item){
   
       if((u_p-l_l)>1){
            ll mid=(l_l+u_p)/2;
            if(cp[mid]==item)
                return mid;

            if(cp[mid]>item) return binSearch(cp,l_l,mid-1,item);
            else return binSearch(cp,mid+1,u_p,item);    
    }
    else{
        if(cp[l_l]==item) return l_l;
        else if(cp[u_p]==item) return u_p;
        else if(item>cp[l_l] && item<cp[u_p]) return l_l;
        else if(item<cp[l_l]) return l_l-1;
        else return u_p;
    }
}

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
        ll n,val;
        cin>>n;
        ll pri_c[n];
        for(auto i=0;i<n;i++) cin>>pri_c[i];  

        ll q;
        cin>>q;
        ll av_l[q];
        for(auto i=0;i<q;i++)  cin>>av_l[i];

        sort(pri_c,pri_c+n);

        //upper_bound return till where position the number is greater than the element 
        //upper_bound(array,array+n,value)-array;
        //upper_bound(vec.begin(),vec.end(),val)-vec.begin();
        for(auto i=0;i<q;i++){
            cout<<upper_bound(pri_c,pri_c+n,av_l[i])-pri_c<<endl;
        }

        //your code goes here
    }

    return 0;
}