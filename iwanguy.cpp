#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll level;
    cin>>level;
    map<int ,int > m;
    ll p,q,val;
    
    cin>>p;
    for(auto i=0;i<p;i++) {
        cin>>val;
        if(m.find(val)==m.end())
        m[val]+=1;
    }
    cin>>q;
    for(auto i=0;i<q;i++) {
        cin>>val;
        
        if(m.find(val)==m.end())
         m[val]+=1;
    }
    if(m.size()==level) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
}