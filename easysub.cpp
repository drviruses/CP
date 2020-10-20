#include<bits/stdc++.h>


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int a[26]={-1};
        int fr[26]={0};
        int b[26]={0};
        int asq[26];
     for(auto i=0;i<26;i++)   asq[i]=100000;

        int n;
        cin>>n;
        string s;
        cin>>s;
        s.tolower();
        
        for(auto i=0;i<s.size();i++){
            fr[s[i]-97]+=1;
            if(a[s[i]-97]==-1){
                a[s[i]-97]=i;
                b[s[i]-97]=i;
            }
        }

        
     
        for(auto i=0;i<s.size();i++){
            if((b[s[i]-97])!=i && fr[s[i]-97]>=2){
                
                
                if(i-b[s[i]-97]<asq[s[i]-97])
                   {
                        
                        asq[s[i]-97]=i-b[s[i]-97];
                   
                   }
                   b[s[i]-97]=i;
            }
        }
       
    int* i1; 
    i1 = std::min_element(asq, asq + 26); 
        
        
        if(*i1==100000) cout<<"0"<<endl;
        else cout<<n-*i1<<endl;
    }
    return 0;
}