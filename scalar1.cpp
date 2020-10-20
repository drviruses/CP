/*
    @uthor: Amit Kumar
    user -->GitHub: drviruses ; CodeChef: dr_virus_ ; Codeforces,AtCoder,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
//#include <boost/multiprecision/cpp_int.hpp>
//namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll    int
#define ld    long double
#define ull   unsigned long long
#define endl "\n"


void virus(){
string A;
cin>>A;
ll q;
cin>>q;

vector<int> ans;
    vector<int> one;
    vector<int> lookup;
    
    for(auto i=0; i<(int)A.size(); i++){
        if(A[i] == '1') one.push_back(i);
        if(A[i] == '0') lookup.push_back(i);
    } 
    for(auto i=0; i<q; i++){
        int ini, fnl;
        cin>>ini>>fnl;
        if(one.size() < 2 || lookup.size() == 0){
            ans.push_back(0);
        }
        else{
            ini -- , fnl --;
            if(ini == fnl or (fnl - ini) == 1){
                ans.push_back(0); continue;
            }
            int start_find = one[0];
            if(ini <= one[0]) start_find = one[0];
            else{
                start_find = upper_bound(one.begin(),one.end(),ini) - one.begin();
                if(one[start_find-1] != ini) start_find += 1;
            }
            
            int last_find = lower_bound(one.begin(),one.end(),fnl) - one.begin();
            if(one.size() > last_find){
                if(one[last_find] == fnl) last_find += 1;
            }
            if(start_find  >= last_find) ans.push_back(0);
            else{
                //cout<<"MY1 "<<last_find<<" "<<start_find<<endl;
                last_find = one[last_find-1];
                if(start_find == 0) start_find = one[start_find];
                else start_find = one[start_find-1];
                //cout<<"MY2 "<<last_find<<" "<<start_find<<endl;
                int a = upper_bound(lookup.begin(),lookup.end(),last_find) - lookup.begin();
                int b = lower_bound(lookup.begin(),lookup.end(),start_find) - lookup.begin();
                ans.push_back( a-b );
            }
        }
    }
    for(auto i:ans) cout<<i<<" ";

}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/

    ll t;
    cin>>t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
         //cout << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}