class Solution {
public:
    void sortColors(vector<int>& nums) {
        // int c1=0;
        // int c2=0;
        // int c3=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==0)c1++;
        //     else if(nums[i]==1)c2++;
        //     else c3++;
        // }
        // for(int i=0;i<c1;i++)
        // {
        //     nums[i]=0;
        // }
        //  for(int i=c1;i<c1+c2;i++)
        // {
        //     nums[i]=1;
        // }
        //  for(int i=c1+c2;i<nums.size();i++)
        // {
        //     nums[i]=2;}
        int mid=0;
        int low=0;
        int high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)mid++;
            else 
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};