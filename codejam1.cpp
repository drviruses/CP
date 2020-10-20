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
//const ll inf = 1e18;
ll ans;
void productsubseq(vector<ll> arr, ll n){
    ll pr=1;
    for(auto i=0;i<n;i++) pr*=arr[i];

    if(pr&1 || pr%4==0) ans+=1;
}

void recursivesubs(vector<ll> arr,ll indx,vector<ll> sub_arr){
    if(indx==arr.size()){
        ll l=sub_arr.size();
        if(l!=0) productsubseq(sub_arr,l);
    }
    else{
        recursivesubs(arr,indx+1,sub_arr);
        sub_arr.push_back(arr[indx]);
        recursivesubs(arr,indx+1,sub_arr);
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

    ll t,c=1;
    cin>>t;
    while(t--){
           ll n,max_r=0,max_c=0,sum=0;
           set<ll> num;
           cin>>n;
           ll arr[n][n];
           for(auto i=0;i<n;i++){
               for(auto j=0;j<n;j++){
                   cin>>arr[i][j];
                   if(i==j)
                   sum+=arr[i][j];
                   num.insert(arr[i][j]);
               }
               if(num.size()<n) max_r+=1;
               num.clear();
           }
           for(auto j=0;j<n;j++){
               for(auto i=0;i<n;i++){
                   num.insert(arr[i][j]);
               }
               if(num.size()<n) max_c+=1;
               num.clear();

           }
           cout<<"Case #"<<c<<": "<<sum<<" "<<max_r<<" "<<max_c<<endl;
           c+=1;
           //your code goes here
    }

    return 0;
}