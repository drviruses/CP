#include<bits/stdc++.h>
#define ll long long

using namespace std;

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll num_of_frnd,ten=10,n_d=9;
    cin>>num_of_frnd;

    ll arr[10][10];
    for(auto i=0;i<10;i++){
        for(auto j=0;j<10;j++)
            cin>>arr[i][j];
    }

    set<pair<ll,ll>> se_t;
    
    for(auto i=0;i<10;i++){
        for(auto j=1;j<10;j++){
            
            if(se_t.find({arr[i][0],arr[i][j]})==se_t.end()){
                if(se_t.find({arr[i][j],arr[i][0]})==se_t.end())
                    {se_t.insert({arr[i][0],arr[i][j]});}
            }

        }
    }    

    //cout<<se_t.size()<<endl;
    cout<<(num_of_frnd*((num_of_frnd-1)/2))-se_t.size();
    return 0;
}