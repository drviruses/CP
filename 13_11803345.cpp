#include<bits/stdc++.h>
using namespace std;

bool mysort(pair <int, pair<int, int>>& a, pair <int, pair<int, int>>&b){
    if(a.second.second == b.second.second) return a.second.first < a.second.second;
    return a.second.second < b.second.second;
}

int main()
 {
     int t;
     cin >> t;
     while(t--){
         int len;
         cin >> len;
         
         vector <int> ini(len), fnl(len);
         
         vector <pair <int, pair<int, int> >> arr;
         for(auto &i : ini) cin >> i;
         for(auto &i: fnl) cin >> i;
         for(auto i=0; i<len; i++) arr.push_back({i+1, {ini[i], fnl[i]}});
         
         sort(arr.begin(), arr.end(), mysort);
         cout << arr[0].first << " ";
         int last = arr[0].second.second;
         for(auto i=1; i<len ; i++){
             if(last <= arr[i].second.first){
                 cout << arr[i].first << " " ;
                 last = arr[i].second.second;
             }
         }
         
         cout << endl;
     }
	//code
	return 0;
}