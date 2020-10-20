#include<bits/stdc++.h>
#define ll long long
#define pp pair<ll,ll>
using namespace std;

int main(){
    
    ll t;
    cin>>t;
    while(t--){
        ll n,x1=0,y1=0;
        string s;
        int f=1;
        cin>>n;
        
        while(n--){
    
            ll x,y;
            cin>>x>>y;
            if(abs(x-x1)<=0)
            for(auto i=0;i<(x-x1);i++) s=s+'R';
            if(abs(y-y1)>=0)
            for(auto j=0;j<abs(y-y1);j++) s=s+'U';
            if(x<x1 && y1<y)
                {f=0; break;}
            x1=x;
            y1=y;    

        }
        if(f==0) {cout<<"NO\n"; }
        else {cout<<"YES\n";
        cout<<s; cout<<endl;}

    }
    return 0;
}