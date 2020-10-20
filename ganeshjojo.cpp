#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        long long int n1,n2,n3,n4=0,d;
        cin>>n1>>n2;
        n3=n1+n2;
        while(n3>0){
           d=n3%10;
           n4=n4*10+d;
           n3/=10;
        }
        cout<<n4<<endl;
    }
    
    return 0;
}