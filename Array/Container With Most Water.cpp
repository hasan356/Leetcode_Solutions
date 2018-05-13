class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = height.size();
        int ans = 0;
        int s = 0 ,e= l-1;
        while(e>s){
            ans = max(ans , (e-s)*min(height[s],height[e]));
            if(height[s]>height[e]){
                e--;       
            }
            else
                s++;
        }
        return ans;
    }
};
