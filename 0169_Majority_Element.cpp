class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        // for(int i=0;i<n;i++)
        // {
            // int count=0;
            // for(int j=0;j<n;j++)
            // {
            //     if(nums[i]==nums[j])
            //     {
            //         count++;
            //     }
            //     if(count>n/2)return nums[j];
            // }
        //     mpp[nums[i]]++;
        // }
        // for(auto it:mpp)
        // {
        //     if(it.second>n/2)return it.first;
        // }
        // return {};
        int count=0;
        int element;
        int count1=0;
        for(int i=0;i<n;i++)
        {
            if(count==0)
            {
                count=1;
                element=nums[i];
            }
            else if(nums[i]==element)
            {
                count++;
            }
            else
            count--;
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==element)count1++;
            if(count1>n/2)return element;
        }
        return {};
    }
};