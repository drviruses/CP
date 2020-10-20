#include<bits/stdc++.h>
#define ll long long
#define pp pair<ll,ll>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,x1=0,y1=0;
        vector <char> s;
        int f=1;
        cin>>n;
        while(n--){
            cout<<"a";
            ll x,y;
            cin>>x>>y;
            if((x-x1)>=0)
            for(auto i=0;i<x-x1;i++) s.push_back('R');
            if((y-y1)>=0)
            for(auto j=0;j<y-y1;j++) s.push_back('U');
            if(x<x1 && y1<y)
                {f=0; break;}
            x1=x;
            y1=y;    

        }
        if(f==0) {cout<<"NO\n"; }
        else {cout<<"YES\n";
        for(vector<char>::iterator ptr;ptr < s.end(); ptr++) cout<<*ptr; cout<<endl;}

    }
    return 0;
}