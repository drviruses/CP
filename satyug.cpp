#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    long long  t,sum=0;
    cin>>t;
    long int a[t];
    for(auto i=0;i<t;i++) cin>>a[i];
    sort(a,a+t);
    string s;
    for(auto i=1;i<=a[t-1];i++) s+= to_string(i);
    for(auto i=0;i<t;i++)  sum+=s.at(a[i]-1)-48;
    cout<<sum;
    
    return 0;
}