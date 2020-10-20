#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    ll n,q;
    cin>>n>>q;
    int s[n];
    for(auto i=0;i<n;i++) cin>>s[i];
    while (q--)
    {
        int f;
        cin>>f;
        if(f==1){
            ll x;
            cin>>x;
            s[x-1]=(s[x-1]==1)?0:1;
        }
        else{
            ll lo,up;
            cin>>lo>>up;
            if(s[up-1]==1) cout<<"ODD"<<endl;
            else cout<<"EVEN"<<endl;
        }
        /* code */
    }
    
    return 0;
}