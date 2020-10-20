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
    
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ll t=1;
    //cin>>t;
    while(t--){
           string word;
           cin>>word;

           ll cnt=0;
           if(word.size()<3) cout<<"0";
           else{
                for(auto i=0;i<word.size()-2;i++){
                    if(word[i]=='Q'){
                        for(auto j=i+1;j<word.size()-1;j++){
                            if(word[j]=='A'){
                                for(auto k=j+1;k<word.size();k++){
                                    if(word[k]=='Q'){
                                        cnt+=1;
                                    }
                                }
                            }
                        }
                    }
                }
              cout<<cnt;
           }
           
        //your code goes here
    }

    return 0;
}