#include<bits/stdc++.h>
#include<fstream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ofstream fo("kic1.txt",ios::app|ios::out);

    string num[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    string times[11]={"","","double","triple","quadruple","quintuple","sextuple","septuple","octuple","nonuple","decuple"};
    int t,it=1;
    cin>>t;
    while(t--){
        string pno,style;
        cin>>pno;
        cin>>style;
        
        int n=(style.size()/2)+1;
        int sy[n],j=0;
        for(auto i=0;i<style.size();i++){
            if(style[i]!='-'){
                sy[j]=style[i]-'0';
                j+=1;
            }
        }
        fo<<"Case #"<<it<<": ";
            it+=1;

        int ul=0,ll=0,ct=0;
        for(auto i=0;i<n;i++){
            
             ul+=sy[i];
             ct=0;
             for(auto j=ll;j<ul;j++){
                
                 if(  j<ul-1 && pno[j]==pno[j+1] ){
                     ct+=1;
                 }
                 else if(j==ul-1)
                   {
                      if(pno[j]!=pno[j-1])
                        fo<<num[pno[j]-'0']<<" ";
                      else
                        ct+=1;
                  }
                 else{
                     ct+=1;
                     if(ct>1){
                        if(ct<11)
                            fo<<times[ct]<<" "<<num[pno[j]-'0']<<" ";
                        else
                        {
                        for(auto k=0;k<ct;k++) fo<<num[pno[j]-'0']<<" ";  
                        }
                     
                     }

                     else
                        fo<<num[pno[j]-'0']<<" ";
                     ct=0;
                 }
             }
            ll+=sy[i];

        }
        fo<<"\n";

    }
    return 0;
}