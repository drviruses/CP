#include <bits/stdc++.h>
#include <chrono>
using namespace std;
#define ll    long long
#define ld    long double


void virus(){
        string word;
        vector<string> ans;
        while(cin >> word){
            if(find(ans.begin(),ans.end(),word) == ans.end()) ans.push_back(word);
        }
        for(auto i:ans) cout<<i<<" ";
}


int32_t main(){
    ll t = 1; 
    //cin>>t;
    while(t--){
           virus();
    }
    return 0;
}