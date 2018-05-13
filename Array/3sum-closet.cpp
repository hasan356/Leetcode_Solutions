class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int l = nums.size();
        sort(nums.begin() , nums.end());
        int ans = INT_MAX;
        int val;
        for(int i=1;i<l-1;i++){
            int s = i-1,e=i+1;
            int sum = 0;
            while(s>=0 && e<l){
                sum+=nums[i];
                sum += nums[s];
                sum +=nums[e];
                if(ans>abs(sum-target)){
                    ans = abs(sum-target);
                    val = sum;
                }
                if(sum-target>0)
                    s--;
                else
                    e++;
                sum = 0;
            }
        }
        return val;
    }
};
