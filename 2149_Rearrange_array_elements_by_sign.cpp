class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>posi;
        vector<int>nega;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                nega.push_back(nums[i]);
            }
            else
            {
                posi.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2;i++)
        {
            nums[2*i]=posi[i];
            nums[2*i + 1]=nega[i];
        }
        return nums;
    }
};