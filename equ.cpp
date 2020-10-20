#include <bits/stdc++.h>
#define ll int
using namespace std;

ll funactv(int **a,int mn,int i,int j,int n,int m){
    ll itr=1;
    for(int k=1;k<mn;k++){
        if(i-k>=0 && j-k>=0 && i+k<n && j+k<m && a[i-k][j]==a[i+k][j] && a[i][j-k]==a[i][j+k]) itr+=1;
        else return itr;
    }
    return itr;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>n>>m;
        
        int **a=new int*[n];
        for(auto i=0;i<n;i++) a[i]=new ll[m];
        
        
        for(auto i=0;i<n;i++){
            for(auto j=0;j<m;j++)
                cin>>a[i][j];
            }
        
        int mn=min(n,m);
        int ans=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            {
                ans+=funactv(a,mn,i,j,n,m);
            }
        }
         cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
