#include<bits/stdc++.h>


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,loc[26]={0},fr[26]={0},foc[26];
        for(auto i=0;i<26;i++) foc[i]=-1;
        cin>>n;
        int k=n;
        string s;
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        
        for(auto i=0;i<s.size();i++)  //for frequency
            fr[s[i]-97]+=1;
        for(auto i=0;i<s.size();i++){ //for first occurence index
            if(foc[s[i]-97]==-1)
                foc[s[i]-97]=i;
        }


        for(auto i=0;i<n;i++){
            if(fr[s[i]-97]>=2 && i!=foc[s[i]-97]){
                  
                 k=min(i-loc[s[i]-97],k);  
            }  
            loc[s[i]-97]=i; 
        }
        
        if(k==n)
            cout<<"0"<<endl;
        else
            cout<<n-k<<endl;    
        
    }
    return 0;
}