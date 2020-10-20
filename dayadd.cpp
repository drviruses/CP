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
#define all(vec) vec.begin(),vec.end()
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;

map<string,ll> cnt;
map<ll,string> cntt;
vector<ll> days = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool isLeap(int y) {  
        return true; 
} 

ll yearchngDays(ll d, ll m, ll y) { 
    ll yearchng = d; 
    switch (m - 1) 
    { 
    case 11: 
        yearchng += 30; 
    case 10: 
        yearchng += 31; 
    case 9: 
        yearchng += 30; 
    case 8: 
        yearchng += 31; 
    case 7: 
        yearchng += 31; 
    case 6: 
        yearchng += 30; 
    case 5: 
        yearchng += 31; 
    case 4: 
        yearchng += 30; 
    case 3: 
        yearchng += 31; 
    case 2: 
        yearchng += 28; 
    case 1: 
        yearchng += 31; 
    } 
    if (isLeap(y) && m > 2) 
        yearchng += 1; 
    return yearchng; 
} 
void changinyr(ll yearchng, ll y, ll *d, ll *m) 
{ 
    ll month[13] = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
    ll i; 
    for (i = 1; i <= 12; i++) { 
        if (yearchng <= month[i]) break; 
        yearchng = yearchng - month[i]; 
    } 
    *d = yearchng; 
    *m = i; 
} 
   
void thevirus(ll d1, ll m1, ll y1, ll x){ 
    ll yearchng1 = yearchngDays(d1, m1, y1); 
    ll remDays = isLeap(y1)?(366-yearchng1):(365-yearchng1); 
    ll y2, yearchng2; 
    if (x <= remDays) { 
        y2 = y1; 
        yearchng2 = yearchng1 + x; 
    } 
    else{ 
        x -= remDays; 
        y2 = y1 + 1; 
        int y2days = isLeap(y2)?366:365; 
        while (x >= y2days){ 
            x -= y2days; 
            y2++; 
            y2days = isLeap(y2)?366:365; 
        } 
        yearchng2 = x; 
    }  
    ll m2, d2; 
    changinyr(yearchng2, y2, &d2, &m2); 
    cout << d2 << " " <<cntt[m2]<<endl; 
}


void virus(){
          ll dt;
          cin>>dt;
          string s;
          cin>>s;
          ll add = 183, tilld = 0;
          ll currmon = cnt[s]-2;
          //cout<<currmon<<endl;
          for(auto i=0; i<=currmon; i++) tilld += days[i];
          tilld += dt;

          ll finl = tilld + add;
          ll i, itrsum = 0;
          //cout<<finl<<endl;
          for( i=0; i<days.size(); i++){
              if(finl - itrsum <= days[i]) break;
              else itrsum += days[i];
          }
          if(i > 12) i -= 12;
          thevirus(dt,currmon+2,2020,add);

}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
  /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    cnt["january"] = 1; cnt["february"] = 2; cnt["march"] = 3; cnt["april"] = 4; cnt["may"] = 5;cnt["june"] = 6; cnt["july"] = 7;
    cnt["august"] = 8;cnt["september"] = 9;cnt["october"] = 10;cnt["november"] = 11;cnt["december"] = 12;

    cntt[1] = "january"; cntt[2] = "february"; cntt[3] = "march"; cntt[4] = "april"; cntt[5] = "may"; cntt[6] = "june"; cntt[7] = "july";
    cntt[8] = "august";cntt[9] = "september";cntt[10] = "october";cntt[11] = "november";cntt[12] = "december";
    ll t;
    cin>>t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
           //cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}