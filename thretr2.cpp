#include<bits/stdc++.h>
#define ld double

using namespace std;

int main(){
    ld n,m,a;
    cin>>n>>m>>a;
    cout<<(long long)ceil(m/a)*(long long)ceil(n/a);
    return 0;
}
