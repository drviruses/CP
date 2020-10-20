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
#define ll    long long
#define ld    long double
#define ull   unsigned long long
#define endl "\n"

void virus(){
          ll len;
          cin>>len;
          string seq;
          cin>>seq;
          ll cnt_a = count(seq.begin(),seq.end(),'A');
          ll cnt_b = count(seq.begin(),seq.end(),'B');

          ll ini=-1;
          char ch = 'Z';
          for(auto i=0; i<len; i++){
              if(seq[i] != '-'){
                  ini = i;
                  ch = seq[i]; break;
              }
          }
          if(ini != -1){
              if(ch == 'A') cnt_a += ini;
          }


          ll fnl = -1;
          for(auto i=len-1; i>=0; i--){
              if(seq[i] != '-'){
                  fnl = i;
                  ch = seq[i]; break;
              }
          }
          if(fnl != -1){
              if(ch == 'B') cnt_b += (len - fnl - 1);
          }
          
          char lastch = 'Z';
          ll cnt = 0;
          for(auto i=ini; i<fnl; i++){
              if(seq[i] != '-'){
                  if(seq[i] == 'A' and lastch == 'B'){
                      cnt_a += (cnt/2); cnt_b += (cnt/2);
                      cnt = 0;
                  }
                  else if(seq[i] == lastch){
                      if(seq[i] == 'B') cnt_b += cnt;
                      else cnt_a += cnt;
                  }
                  lastch = seq[i];
              }
              else cnt+=1;
          }
          if(cnt_a > cnt_b) cout<<"A";
          else if(cnt_b > cnt_a) cout<<"B";
          else cout<<"Coalition government";
          
}


int32_t main(){
    ll t = 1;
    //cin>>t;
    while(t--){
           virus();
    }
    return 0;
}