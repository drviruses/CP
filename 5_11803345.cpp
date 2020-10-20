class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int exist[nums.size()];
        memset(exist,0,sizeof(exist));
        for(auto i:nums){
            if(i > 0 and i <= (int)nums.size()){
                exist[i-1] = 1; 
            }
        }
        for(int i=0; i<(int)nums.size(); i++){ 
            if(!exist[i]){
            return i+1;
            }
         }
        return nums.size()+1;
    }
};