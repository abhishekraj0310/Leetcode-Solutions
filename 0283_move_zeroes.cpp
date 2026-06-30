class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // vector<int>temp;
         if(nums.size()==1)return;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]!=0)
        //     {
        //         temp.push_back(nums[i]);
        //     }
        // }
        //     for(int i=0;i<temp.size();i++)             //BRUTE FORCE METHOD
        //     {
        //         nums[i]=temp[i];
        //     }
        //     for(int i=temp.size();i<nums.size();i++)
        //     {
        //         nums[i]=0;
        //     }
        int j=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                j=i;
                break;                       // OPTIMAL SOLUTION
            }
        }
          if(j==-1)return;
        for(int i=j+1;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
      
    }
};