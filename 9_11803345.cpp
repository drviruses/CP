class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cnt = 0;
        for(auto i:arr1){
            for(auto j:arr2){
                if(abs(j-i) <= d) goto here;
            }
            cnt += 1;
            here: ;
        }
        return cnt;
    }
};