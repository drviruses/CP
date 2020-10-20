#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){

        ll a[3];
        ll s,sum=0;
        cin>>s;
        for(auto i=0;i<3;i++) {cin>>a[i]; sum+=a[i];}

        if(s>=sum) cout<<"1"<<endl;

        else if(a[0]==a[1] && a[1]==a[2] && a[2]==s) cout<<"3";
        
        else cout<<"2"<<endl;
        
        
    }



}