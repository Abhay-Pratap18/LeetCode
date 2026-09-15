class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int res;
        int n = size * (size +1)/2;
        int sum =0;
        for(int i =0;i<size ;i++){
            sum += nums[i];
        }
        res = n - sum; 
        return res;
    }
   
};