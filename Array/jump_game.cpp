class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int max_jump = 0;
        for(int i=0;i<n;i++){
            if(i<=max_jump && i+nums[i] > max_jump)
                max_jump = i + nums[i];
            else if(i>max_jump)
                return false;
        }
        return true;
    }
};
