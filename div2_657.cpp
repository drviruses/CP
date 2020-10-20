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
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

ll popcount(ll num){
    num = num - ((num >> 1) & 0x55555555);
    num = (num & 0x33333333) + ((num >> 2) & 0x33333333);
    return ((num + (num >> 4) & 0xF0F0F0F) * 0x1010101) >> 24;
}

vector<pair<ll,ll>> factor_arr;

void myfactor(ll num){ 
    ll count = 0;   
    while (!(num % 2)) { 
        num >>= 1; count++; 
    }  
    if (count) factor_arr.push_back({2,count}); 
    for (auto i = 3; i <= sqrt(num); i += 2) { 
        count = 0; 
        while (num % i == 0) { 
            count++; 
            num /= i; 
        } 
        if (count) factor_arr.push_back({i,count}); 
    } 
    if (num > 2) factor_arr.push_back({num,1});
}

void virus(){
       ll len;
       cin>>len;
       string seq;
       cin>>seq;
       if(len < 7){
           cout<<"No\n";
       }
       else{
           ll cnt = 0;
           for(auto i:seq) if(i == '?') cnt++;
           if(cnt == 0){
               if(seq.find("abacaba") == string::npos)
                    cout<<"No\n";
               else{
                    size_t f = seq.find("abacaba");
                    if(f != string::npos){
                      f = seq.find("abacaba", f+1);
                      if(f != string::npos) cout<<"No\n";
                      else cout<<"Yes\n"<<seq<<endl; 
                    }
               }     
           }
           else{
                vector<string> sub;
                for(auto i=0; i<=len-7; i++){
                    string temp = "";
                    for(auto j=i; j<7+i; j++){
                        temp += seq[j];
                    }
                    sub.push_back(temp);
                }
                
                size_t f = seq.find("abacaba");
                if(f != string::npos){
                    f = seq.find("abacaba", f+1);
                    if(f != string::npos){
                        cout<<"No\n";
                    }
                    else{ 
                        cout<<"Yes\n";  
                        for(auto i:seq){
                            if(i == '?') cout<<"z";
                            else cout<<i;
                        }  
                        cout<<endl;
                    }
                }
                else{
                        ll pos = -1;
                        string res = "abacaba";
                        ll mis = 0;
                        for(auto i=0; i<sub.size(); i++){
                            bool in = false;
                            for(auto j=0; j<7; j++){
                                if((sub[i][j] != '?' and sub[i][j] != res[j]))
                                    if(!in) in = true;
                            }
                            if(!in){
                                pos = i; break;
                            }
                        }
                        if(pos == -1) cout<<"No\n";
                        else{
                            cout<<"Yes\n";
                            for(auto i=0; i<pos; i++){ 
                            if(seq[i] != '?') cout<<seq[i]; else cout<<"z";
                            }
                            cout<<"abacaba";
                            for(auto i=pos+7; i<(ll)(seq.size()); i++){ 
                            if(seq[i] != '?') cout<<seq[i]; else cout<<"z";
                            }
                            cout<<endl;
                        }
                }
           }
       }
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