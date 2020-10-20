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

ll c_dist( ld x_1, ld y_1,ld x_2,ld y_2,ld r){
    return ((ld)sqrt((ll)(abs((x_2-x_1)*(x_2-x_1))+abs((y_2-y_1)*(y_2-y_1))))<=r)?1:0;
}

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
         ll range;
         cin>>range;
         ld x_1,y_1,x_2,y_2,x_3,y_3;
         cin>>x_1>>y_1;
         cin>>x_2>>y_2;
         cin>>x_3>>y_3;
         if(c_dist(x_1,y_1,x_2,y_2,range) && c_dist(x_2,y_2,x_3,y_3,range)) cout<<"yes\n";
         else if(c_dist(x_1,y_1,x_3,y_3,range) && c_dist(x_1,y_1,x_2,y_2,range)) cout<<"yes\n";
         else if(c_dist(x_1,y_1,x_3,y_3,range) && c_dist(x_2,y_2,x_3,y_3,range)) cout<<"yes\n";
         else cout<<"no\n";
        //your code goes here
    }
    //cerr<<"Time Elapsed: "<<clock()/(double)CLOCKS_PER_SEC<<endl;
    return 0;
}