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
           string s;
           cin>>s;
           ll f=1,c=0;
           for(auto i=1;i<s.size();i++){
               if(s[i]>='a' && s[i]<='z') {f=0; break;}
               else c+=1;
           }
           if(f==0) cout<<s;
           else{
               if(c==s.size()-1 && ( s[0]>='A' && s[0]<='Z')) {
                   for(auto i=0;i<s.size();i++) cout<<(char)tolower(s[i]);
               }
               else{
                cout<<(char)toupper(s[0]);
                for(auto i=1;i<s.size();i++) cout<<(char)tolower(s[i]);}
            }
        //your code goes here
    }

    return 0;
}