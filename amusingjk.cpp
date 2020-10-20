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
          string first,second,third;
          cin>>first>>second>>third;
          map<char,ll,greater<char>> ma_p1,ma_p2;

          for(auto i=0;i<first.size();i++) {
              if(ma_p1.find(first[i])==ma_p1.end())
                ma_p1.insert({first[i],0});
              else  
                ma_p1[first[i]]+=1;
            }

          for(auto i=0;i<second.size();i++) {
              if(ma_p1.find(second[i])==ma_p1.end())
                ma_p1.insert({second[i],0});
              else 
              ma_p1[second[i]]+=1; 
            }

          for(auto i=0;i<third.size();i++){ 
              if(ma_p2.find(third[i])==ma_p2.end())
                ma_p2.insert({third[i],0});
              else 
              ma_p2[third[i]]+=1;
            }
            if(ma_p1.size()!=ma_p2.size()) cout<<"NO";
            else{
                bool f=true;
                for(auto i=0;i<ma_p1.size();i++){
                    if(ma_p1[i]!=ma_p2[i]){
                        f=false;
                        break;
                    }
                }
                if(f) cout<<"YES";
                else cout<<"NO";
            }
        //your code goes here
    }

    return 0;
}