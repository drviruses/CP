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
#define ll    long long int
#define ld    long double
#define ull   unsigned long long
#define endl "\n"
#define all(vec) vec.begin(),vec.end()
ll google_itr = 1;
#define google(x) cout<<"Case #"<<x<<":"
#define pi 3.14159265358979323846264338327950L

const ll mod = 1e9+7;
const ll inf = 1e18;


void virus(){
    ll len, dir;
    cin>>len>>dir;
    vector<ll> arr(dir);
    for(auto &i:arr) cin>>i;
    sort(all(arr));
    if(dir == 0){
        cout<<"YES"; return;
    }
    if(arr[0] == 1 or arr[dir-1] == len){
        cout<<"NO";
        return;
    }
    else{
        bool is = false;
        for(auto i=0; i<=dir-3; i++){
            if((arr[i] + 1) == arr[i+1] and (arr[i+1] + 1) == arr[i+2]){
                is = true; break;
            }
        }
        if(is) cout<<"NO";
        else cout<<"YES";
    }
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll t = 1;
    //cin>>t;
    while(t--){
           auto start = high_resolution_clock::now();
           virus();
           auto stop = high_resolution_clock::now();
           auto duration = duration_cast<seconds>(stop - start);
           cerr << "\nTime: "<<duration.count()<<endl;
        //your code goes here
    }
    return 0;
}