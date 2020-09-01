class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        // declar variables
        vector <vector<int>> answer;
        // sort the given array
        sort(nums.begin(),nums.end());
        // cal the array size
        int len = nums.size();
         // loop through every element
        for(int i=0; i< len-2;i++)
        {
            // set the high and low
            int lo = i+1;
            int hi = len-1;
            
            while(lo < hi)
            {
                if(nums[i]+nums[lo]+nums[hi] == 0)
                {
                    answer.push_back({nums[i],nums[lo],nums[hi]});
                    while(lo < hi && nums[lo] == nums[lo+1] )
                        lo++;
                    while(hi > lo && nums[hi] == nums[hi-1])
                        hi--;
                    lo++;
                    hi--;
                   
                }
                else if(nums[i]+nums[lo]+nums[hi] < 0)
                    lo++;
                else
                    hi--;
            }
        }
        sort(answer.begin(),answer.end());
        answer.erase(unique(answer.begin(),answer.end()),answer.end());
        return answer;
        
    }
};