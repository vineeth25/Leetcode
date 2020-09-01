class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
    
        int len = nums.size();
        sort(nums.begin(),nums.end());
        int sum = 0;
        int val = 0;
        int check = -1;
        int ans = 0;
        for(int i=0;i<len;i++)
        {
            int lo = i+1;
            int hi = len-1;
            while(lo < hi)
            {
                sum = nums[i]+nums[lo]+nums[hi];
                val = abs(sum - target);
                if(check == -1 || val < check)
                {
                    check = val;
                    ans = sum;
                    
                }
                if (sum > target)
                    hi--;
                else
                    lo++;
            }
        }
        return ans;
    }
};