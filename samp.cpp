/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
#define ll int

using namespace std;

int main(){
    ll n;
    cin>>n;
    ll a[n][n];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++) cin>>a[i][j];
    }
    
    ll q;
    cin>>q;
    while(q--){
        ll r,a,b,c,sum=0;
        cin>>r>>a>>b>>c;
        if(r==1){
            for(ll i=a-1;i<=b-1;i++ ){
                for(ll j=0;j<n;j++)
                    a[i][j]= a[i][j]^c;
            }
        }
        else{
            for(auto i=0;i<n;i++){
                for(auto j=a-1;j<=b-1;j++)
                    a[i][j]=(a[i][j] ^ c);
            }
        }
        
        for(auto i=0;i<n;i++){
            for(auto j=0;j<n;j++) if(i==j) sum+=a[i][j];
        }    
        cout<<sum;
    }
    return 0;
}