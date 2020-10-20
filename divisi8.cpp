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

void virus(){
        string s_num;
        cin>>s_num;
        
        for(auto i=0; i<s_num.size(); i++){
            string temp = "";
            temp += s_num[i];
            ll t_num = stoll(temp);
            if(t_num%8 == 0){
                cout<<"YES\n";
                cout<<t_num<<endl;
                return;
            }
            for(auto j=i+1; j<s_num.size(); j++){
                string temp = "";
                temp += s_num[j];
                ll t_num = stoll(temp);
                if(t_num%8 == 0){
                    cout<<"YES\n";
                    cout<<t_num<<endl;
                    return;
                }
                temp += s_num[i];
                reverse(temp.begin(),temp.end());
                t_num = stoll(temp);
                if(t_num%8 == 0){
                    cout<<"YES\n"; cout<<t_num;
                    return;
                }

                for(auto k=j+1; k<s_num.size(); k++){
                    string temp = "";
                    temp += s_num[k];
                    ll t_num = stoll(temp);
                    if(t_num%8 == 0){
                        cout<<"YES\n";
                        cout<<t_num<<endl;
                        return;
                    }
                    temp += s_num[j];
                    reverse(temp.begin(),temp.end());
                    t_num = stoll(temp);
                    if(t_num%8 == 0){
                        cout<<"YES\n";
                        cout<<t_num<<endl;
                        return;
                    }
                    reverse(temp.begin(),temp.end());
                    
                    temp += s_num[i];
                    reverse(temp.begin(),temp.end());
                    t_num = stoll(temp);
                    if(t_num%8 == 0){
                        cout<<"YES\n"; 
                        cout<<t_num<<endl;
                        return;
                    }
                }
            }
        }
        cout<<"NO\n";

}


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
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
         //cout << "Time: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}