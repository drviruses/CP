/*
    @uthor: Amit Kumar
    user -->GitHub: drviruses ; CodeChef: dr_virus_ ; Codeforces,AtCoder,Hackerearth,Hakerrank: dr_virus;
*/
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;
//#define ln mp::cpp_int;
#define ll    long long
#define int long long
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

mp::cpp_int maxk(int A[], int n, int k) 
{ 
    sort(A, A + n); 
  
    mp::cpp_int product = 1; 
  
    if (A[n - 1] == 0 && (k & 1)) 
        return 0; 
  
    if (A[n - 1] <= 0 && (k & 1)) { 
        for (int i = n - 1; i >= n - k; i--) 
            product =(product) * A[i]; 
        return product; 
    } 
  
    int i = 0; 
  
    int j = n - 1; 
  
    
    if (k & 1) { 
        product =(product) *  A[j]; 
        j--; 
        k--; 
    } 
    k >>= 1; 
  
    for (int itr = 0; itr < k; itr++) { 
  
        int left_product = A[i] * A[i + 1]; 
  
        int right_product = A[j] * A[j - 1]; 
  
        if (left_product > right_product) { 
            product =(product) *  left_product; 
            i += 2; 
        } 
        else { 
            product =(product) *  right_product; 
            j -= 2; 
        } 
    } 
  
    return product; 
} 

void virus(){
    ll r,c,k,has = 0;
    cin>>r>>c>>k;
    char mat[r][c];
    for(auto i=0;i<r;i++){
        for(auto j=0;j<c;j++) {cin>>mat[i][j]; if(mat[i][j] == '#') has++;}
    }
    ll p = 0;
    
    for(auto i=0;i<r;i++){
        for(auto j=0;j<c;j++){
            for(auto k=0;k<r;k++){
                for(auto l=0;l<c;l++){
                    if(k != i and l != j and mat[k][l] == '#') p++;
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