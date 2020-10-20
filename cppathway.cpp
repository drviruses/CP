include<bits/stc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> cnt;
        for(auto i:s) cnt[i]++;
        if(cnt.size() < 3){
            cout<<"Good\n"; continue;
        }
        vector<int> arr;
        for(auto i:cnt) arr.push_back(i.second);
        sort(arr.begin(),arr.end()); bool in = false;
        for(auto j=2; j<arr.size(); j++){
            if(arr[i] == arr[i-1] + arr[i-2]) continue;
            else{
                cout<<"Bad\n"; in = true; break;
            }
        }
        if(!in) cout<<"Good\n";
        int n = builtin_popc
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}