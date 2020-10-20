class Solution {
public:
    int findLucky(vector<int>& arr) {
        int cnt[500];
        memset(cnt,0,sizeof(cnt));
        for(auto i:arr) cnt[i-1]++;
        int max = 0,ans = -1;
        for(auto i=0; i<500; i++){
            if((i+1) == cnt[i] and (i+1)>max) max = i+1, ans = (i+1);
        }
        return ans;
    }
};