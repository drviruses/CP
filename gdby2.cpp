#include<bits/stdC++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n-1];
        for(auto i=0;i<n;i++) {cin>>a[i];}
        ll flag=0;
        for(auto i=0;i<n-1;i++){
            b[i]=abs(a[i]-a[i+1]);
            if(b[i]>=2)
            {
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<i+2<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0) cout<<"NO"<<endl;
        


        
    }
    return 0;
}