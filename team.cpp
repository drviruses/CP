#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll q,w_at=0;
    cin>>q;
    
    while (q--)
    {
        ll arr[3],c_1=0,c_0=0;
        for(auto i=0;i<3;i++) {cin>>arr[i]; if(arr[i]==1)c_1+=1; else c_0+=1;}
        if(c_1>c_0) w_at+=1;
        /* code */
    }
    cout<<w_at;
    return 0;
}