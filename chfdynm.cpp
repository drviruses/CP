#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){
        ll n,s,a,b,c,d,e;
        cin>>n;
        cin>>a;
        
        s=((pow(10,n)*2)+a)-1;
        cout<<s<<endl;
        fflush(stdout);
        cin>>b;
        c=pow(10,n)-b;
        cout<<c<<endl;
        fflush(stdout);
        cin>>d;
        e=pow(10,n)-d;
        cout<<e<<endl;
        fflush(stdout);
        cout<<1<<endl;
    
    }



}