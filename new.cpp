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
           ll len,pos;
           cin>>len>>pos;
           string vec(len,'b');
           for(auto i=0;i<len-2;i++){
               vec[i]='a';
           }
           ll cn=(len*(len-1))/4;
           ll cp=cn;
           vector<string> patt;
           patt.push_back(vec);

           cout<<patt[0];
          while (cn!=1)
           {
                next_permutation(vec.begin(),vec.end());
                patt.push_back(vec);
                cn-=1;
               
          }

          

           if(pos>cp) {
               string s1=patt[pos%cp];
               reverse(s1.begin(),s1.end());
               cout<<s1<<endl;
               }
           else cout<<patt[pos]<<endl;  
        patt.erase(patt.begin(),patt.end());
        vec.erase();
         
        //your code goes here
    }

    return 0;
}