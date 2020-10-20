
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
                ll n,m,q,ct=0;
                cin>>n>>m>>q;
                ll a[n][m];
                for(size_t i=0;i<n;i++){
                    for(size_t j=0;j<m;j++) a[i][j]=0;
                }
                while(q--){
                    ll r,c;
                    cin>>r>>c;
                    for(size_t i=0;i<n;i++){
                        
                            if(i==(r-1))
                                {
                                   a[][j]= (a[][j]==0)? 1 : 0 ;
                                }
                            }
                    for(size_t j=0;j<m;j++){            
                            if(j==(c-1))
                                {
                                   a[][j]= (a[][j]==0)? 1 : 0 ;
                                }    
                        }
                    }
                
                for(size_t i=0;i<n;i++){
                    for(size_t j=0;j<m;j++)
                    {
                       if(a[i][j]==1)
                            ct+=1;
                    }
                }
                cout<<ct<<endl;
            }

            return 0;
        }