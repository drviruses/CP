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

ll findsumarray_1(ll passed_arr[],ll n){
    unordered_map<ll,ll> prevsum;
    ll res=0,currsum=0;
    for(auto i=0;i<n;i++){
        currsum+=passed_arr[i];
        if(currsum==1){
            res+=1;
        }
        if(prevsum.find(currsum - 1)!= prevsum.end()){
            res+=(prevsum[currsum-1]);
        }
        prevsum[currsum]++;
    }
    return res;
}

int32_t main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while(t--){        
            ll n;
            cin>>n;
            ll array[n],pre_pr[n]={0};
            for(auto i=0;i<n;i++) {cin>>array[i];
            if(array[i]%2==0 && array[i]%4!=0)
                pre_pr[i]=1;
            if(array[i]%4==0)
                pre_pr[i]=2;
            }  
            //prefix pr
            ll pr=1;
            for(auto i=0;i<n;i++){
                array[i]*=pr;
            }        
            
            cout<<((n*(n+1))/2) - findsumarray_1(pre_pr,n)<<endl; 
    }        
    return 0;
}

