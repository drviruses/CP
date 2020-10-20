
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
#define ll    long long
#define ld    long double

void virus(){
       ll len,x;
       cin>>len>>x;
       vector<ll> arr(len);
       map<ll,ll> used;
       for(auto i=0; i<len; i++){ cin>>arr[i]; used[arr[i]] = 0; }
       sort(arr.begin(),arr.end());
       vector<ll> ser(arr.begin(),arr.end());
       reverse(arr.begin(),arr.end());
       if(x >= arr[0]) cout<<len<<endl;
       else if(arr[0] == arr[len-1]){
           ll cure = arr[0], cnt = 0;
           while(x < cure)  cnt++, x <<= 1;
           cout<<cnt+len<<endl;
       }
       else{
           ll cnt = 0;
           for(auto i=0; i<len; i++){
               if(!used[arr[i]]){
                   ll cure = arr[i];
                   while(x < cure){
                       cnt++;
                       ll itr = lower_bound(ser.begin(),ser.end(),x) - ser.begin();
                       if(itr != 0){
                            itr--;
                            for(auto j=itr; j >= 0; j--){
                                if(!used[ser[j]]){
                                    used[ser[j]] = 1; x = ser[j]; break;
                                }
                            }
                       }
                       x <<= 1;
                   }
                   cnt++;
                   used[arr[i]] = 1;
               }
           }
           cout<<cnt<<endl;
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