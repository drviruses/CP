
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define ll    long long

void virus(){
    ll len;
    cin>>len;
    map<ll,ll> A;
    map<ll,ll> B;
    map<ll,ll> all;
    ll ex_min = LLONG_MAX;
    for(auto i=0;i<len;i++){
        ll t;
        cin>>t;
        A[t]++;
        ex_min = min(ex_min,t);
        all[t]++;
    }
    for(auto i=0;i<len;i++){
        ll t;
        cin>>t;
        B[t]++;
        ex_min = min(ex_min,t);
        all[t]++;
    }
    for(auto i:all){
        if(i.second&1){
            cout<<"-1\n"; return;
        }
    }
    ll ans =0,trf_a = 0,trf_b=0;
    map<ll,ll> a_neg;
    map<ll,ll> b_neg;
    
    for(auto i:A){
        if(A[i.first] > B[i.first]){
            a_neg[i.first] = ((A[i.first] - B[i.first])/2);
            trf_a += ((A[i.first] - B[i.first])/2);
        }
        
    }
    for(auto i:B){
        if(B[i.first] > A[i.first]){
            b_neg[i.first] = ((B[i.first] - A[i.first])/2);
            trf_b += ((B[i.first] - A[i.first])/2);
        }
        
    }
    if(trf_b != trf_a){
        cout<<"-1\n"; return;
    }
    vector<ll> arr1,arr2;
    for(auto i:a_neg){
        for(auto j=0;j<i.second;j++) arr1.push_back(i.first);
    }
    for(auto i:b_neg){
        for(auto j=0;j<i.second;j++) arr2.push_back(i.first);
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end(),greater<ll>());
    for(auto i=0;i<arr1.size();i++){
        ans += min({arr1[i],arr2[i],((ex_min)<<1)});
    }
    cout<<ans<<endl;
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    

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