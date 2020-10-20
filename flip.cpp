#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,c=0,c1=0,c0=0,mx=0;
    cin>>n;
    string s;
    cin>>s;

    for(auto i=0;i<n;i++) if(s[i]=='1') c+=1;

    for(auto i=0;i<n;i++){
        
        for(auto j=i;j<n;j++){
            if(s[i]=='1') c1+=1;
            else c0+=1;

            mx=max(mx,abs(c0-c1));
        }
    }
    cout<<c+mx;
    return 0;
}