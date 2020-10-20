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

void virus(){
        ll len;
        cin >> len;
        auto summation = [&](ll len){
            return (((len+1)*len)>>1); 
        };
        //if sum is odd
        if(summation(len) & 1) cout <<"0"<< endl; 
        //if sum even
        else{
            ll lower = 0, upper = summation(len), ans = 0, lr = 0, rr = len - 1, lastitr = -1;
            auto tempo = [&](ll r, ll l){
                return (((r - l) - l)>>1);
            };
            while(lr <= rr) {
                ll mid = (lr + rr) / 2;
                lower = ((mid + 1ll) * (mid + 2))>>1;
                if(lower > (upper - lower)) rr = mid - 1;
                else {
                    ll num = (upper - (lower<<1));
                    num >>= 1;
                    if(num >= len) lr = mid + 1;
                    else lastitr = mid, rr = mid - 1;
                }
            }
            for(auto i = lastitr ; i < len - 1; i++) {
                lower = ((i + 1ll) * (i + 2))>>1;
                if(lower > (upper - lower)) goto here;
                ll num = (upper - (lower<<1));
                num >>= 1;
                if(num >= len) continue;
                ll first = 1, last = num + 1;
                if(last <= i + 1) {
                    ll val = (i + 2) - last;
                    last += val, first += val;
                }
                if(first != last){
                    ll left = last - first, right = len - last + 1;
                    ans += min(left, right);
                } 
                else{
                    ll remain = len - (i + 1);
                    ans += (i*(i+1))>>1;
                    ans += (remain* (remain-1))>>1;
                }
                cerr<<ans;
            }
            here:;
            cout <<ans<< endl;
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

    ll t;
    cin>>t;
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