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

    ll t,c=1;
    cin>>t;
    while(t--){
        string s,ans="";
        cin>>s;
        ll br=0;

        for(auto i=0;i<s[0]-'0';i++) ans+='(';
        br+=(s[0]-'0');
        
        for(auto i=0;i<s.size()-1;i++){
            ans+=s[i];

            if( s[i+1]-'0' > s[i]-'0' ){
            for(auto j=0;j<abs(  (s[i+1]-'0') - (s[i]-'0') );j++) ans+='(';
            br+=abs(  (s[i+1]-'0') - (s[i]-'0') );
            }

            else if( s[i+1]-'0' < s[i]-'0'){
            for(auto j=0;j<abs((s[i]-'0') - (s[i+1]-'0'));j++) { ans+=')';}
            br-=abs(  (s[i+1]-'0') - (s[i]-'0') );
            }

        }
        ans+=s[s.size()-1];
        for(auto i=0;i<br;i++) ans+=')';

        cout<<"Case #"<<c<<": "<<ans<<endl;
          c+=1; 
        //your code goes here
    }

    return 0;
}