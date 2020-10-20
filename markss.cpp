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
#define int    long long
#define ld    long double
#define ull   unsigned long long
#define endl "\n"


int getSum(int BITree[], int index) 
{ 
    int sum = 0; 
    index = index + 1; 
    while (index>0) 
    { 
        sum += BITree[index]; 
        index -= index & (-index); 
    } 
    return sum; 
} 

void updateBIT(int BITree[], int n, int index, int val) 
{  
    index = index + 1; 
    while (index <= n) 
    { 
    BITree[index] += val; 
    index += index & (-index); 
    } 
} 

int *constructBITree(int arr[], int n) 
{  
    int *BITree = new int[n+1]; 
    for (int i=1; i<=n; i++) 
        BITree[i] = 0; 
    for (int i=0; i<n; i++) 
        updateBIT(BITree, n, i, arr[i]); 
  
    return BITree; 
} 

void virus(){
        int len;
        cin>>len;
        int arr[len];
        for(auto i=0;i<len;i++) cin>>arr[i];
        int *BITree = constructBITree(arr, len); 
        int q;
        cin>>q;
        while(q--){
            int x,a,b;
            cin>>x>>a>>b;
            if(x == 0){
                arr[a-1] += b;
                updateBIT(BITree, len, a-1, b);
            }
            else{
                int sum = getSum(BITree, max(a,b)-1) - getSum(BITree, min(a,b) - 2);
                cout<<ceil((ld)sum/(ld)(max(a,b) - min(a,b) + 1))<<endl;
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

    int t=1;
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