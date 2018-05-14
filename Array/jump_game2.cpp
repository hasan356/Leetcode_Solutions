class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int max_jump = 0;
        int i = 0;
        int jumps = 0;
        if(n==1)
            return 0;
        while(i<n){
            jumps++;
            max_jump = max(max_jump , i+nums[i]);
            if(max_jump>=n-1){
                return jumps;
            }
            int maxx = 0;
            for(int j = i+1;j<=max_jump;j++){
                if(maxx<j+nums[j]){
                    maxx = j+nums[j];
                    i = j;
                }
            }
        }
        return jumps;
    }
};
