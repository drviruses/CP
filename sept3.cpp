#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long int A,B,C,c=1;
            cin>>A>>B>>C;
        if((A==1)||(C==1))
         cout<<"0";
        else{
            for(auto i=2;i<=A;i++)
            {
                for(auto k=2;k<=C;k++)
                {
                    
                    {
                        if(((i-1)*(k-1))>(j*j))
                         c+=1;
                    }
                }
            }
        }
        cout<<c<<endl;

    }
    

    return 0;
}