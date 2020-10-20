#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n+=5;
        int a[n],c[n]={0},d=0;
        for(size_t i=0;i<5;i++) a[i]=751;
        for(size_t i=5;i<n;i++) cin>>a[i];

        for(int i=5;i<n;i++){
            int j=i-1;
            while(j>=0 && (a[j]>a[i]))
            {
                c[i]+=1;
                j-=1;
            }    
        }
        for(size_t i=0;i<n;i++){
            if(c[i]>=5)
             d+=1;
        } 
        
        cout<<d<<endl;
     }
    return 0;
}