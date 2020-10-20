class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0), lsum = 0;
        for(auto i=0; i<(int)nums.size(); i++){
             sum -= nums[i];
            if(lsum == sum){
                return i;
            }
            lsum += nums[i];
        }
        return -1;
    }
};