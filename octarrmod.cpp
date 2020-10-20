
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
            ll n,k;
            cin>>n>>k;
            ll ar[n];
            for(size_t i=0;i<n;i++) cin>>ar[i];

          
          for(size_t i=0;i<n;i++){
            for(size_t j=0;j<k;j++){
                ll a=ar[j%n];
                ll b=ar[n-(j%n)-1];
                ar[i%n]=a ^ b;

            }
          }  
        for(size_t i=0;i<n;i++) cout<<ar[i]<<" ";
        cout<<"\n";
        }

    }