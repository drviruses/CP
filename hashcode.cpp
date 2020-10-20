#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){
        string s,h;
        cin>>s;
        cin>>h;
        int a[26]={0},b[26]={0},f=0,ue=0;
        for(auto i=0;i<s.size();i++)
            {a[s[i]-97]+=1;
            b[h[i]-97]+=1;
            }

        for(auto i=0;i<26;i++)
        {
            if(a[i]!=0)
            ue+=1;
        }  
    

            
        for(auto i=0;i<h.size();i++){
            if(h[i]==s[0] && f==0)
                f=1;
            if(f==1 && ue!=0){
                    if(b[h[i]-97]!=0)
                        {
                            if(a[h[i]-97]==1)
                            {
                                ue-=1;
                                a[h[i]-97]-=1;
                            }
                            else if(a[h[i]-97]>1)
                                a[h[i]-97]-=1;
                            else if(a[h[i]-97]==0 && ue==0)
                            {
                                ue=1;
                                break;
                            }


                        }
                    }    
         }
        
        if(ue==0) cout<<"YES\n";
        else cout<<"NO\n";    
    }

    return 0;
}