#include<bits/stdc++.h>
#include<vector>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll m,a,c=0;
        vector <ll> ar;
        cin>>a>>m;
    
        ll p=1;
        for(auto i=floor((m)/(a+1));i>=1;i--){
           float ck=(float)(float(m-i)/float(i*a));
            //cout<<float(ck)<<" "<<floor(ck)<<endl;
            if(ck-floor(ck)==0)
            {
                c+=1;
                p=ck*i;
                ar.push_back(p);
            }

        }
        cout<<c<<endl;
        for(auto i=ar.begin();i!=ar.end();i++)
            cout<<*i<<" ";
        cout<<endl;    

        
            
    }
    return 0;
}