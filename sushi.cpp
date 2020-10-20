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
           ll len,fluc=0,j=0;
           cin>>len;
           vector<ll> type(len);
           vector<ll> type_b(len);
           vector<ll> cnt_v;
           vector<ll> cnt_b;
           for(auto i=0;i<len;i++) cin>>type[i];
           for(auto i=len-1;i>=0;i--) type_b[i]=type[j++];

           if(len==2){ cout<<"2";}
           else{
                    
                    ll parlen=1;
                    for(auto i=1;i<len;i++){
                        if(type[i]==type[i-1]){
                            parlen+=1;
                        }
                        else{
                            if(fluc==0){
                                parlen+=1;
                                fluc=1;
                            }
                            else{
                                cnt_v.push_back(parlen-(parlen%2));
                                parlen=0;
                                fluc=0;
                            }
                        }
                        }


                        ll parlen_b=1,fluc_b=0;
                    for(auto i=1;i<len;i++){
                        if(type_b[i]==type_b[i-1]){
                            parlen_b+=1;
                        }
                        else{
                            if(fluc_b==0){
                                parlen_b+=1;
                                fluc_b=1;
                            }
                            else{
                                cnt_b.push_back(parlen_b-(parlen_b%2));
                                parlen_b=0;
                                fluc_b=0;
                            }
                        }
                        }

                        sort(cnt_v.begin(),cnt_v.end(),greater<ll>());
                        sort(cnt_b.begin(),cnt_b.end(),greater<ll>());
                        cout<<max(cnt_v[0],cnt_b[0]);

            }    
        //your code goes here
    }

    return 0;
}