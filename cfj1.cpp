#include<bits/stdc++.h>
#define ll long long int

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2!=0){
            cout<<"7";
            for(auto i=0;i<(n/2)-1;i++) cout<<"1";
            cout<<endl;
        }
        else{
            for(auto i=0;i<(n/2);i++) cout<<"1";
            cout<<endl;
        }
    }
    return 0;
}