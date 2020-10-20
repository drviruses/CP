//even fibonacci numbers
//project euler 2

    #include<bits/stdc++.h>
    #include<math.h>
    
    using namespace std;

    int main(){

        ios_base::sync_with_stdio(false);
        cin.tie(0);
        
        long long int prv=0,cur=2,n,sum=0,aux;
        cin>>n;
        while(cur<n){
            sum+=cur;
            aux=cur;
            cur=(cur*4)+prv;
            prv=aux;
        }
        cout<<sum;
        return 0;
    }