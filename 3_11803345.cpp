#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s;
        cin>>k;
        set<char> u;
        for(auto i:s) u.insert(i);
        int need = 26 - (int)u.size();
        int spc = (int)s.size() - (int)u.size();
        if(need <= k and spc >= need) cout<<"1\n";
        else cout<<"0\n";
    }
    return 0;
}