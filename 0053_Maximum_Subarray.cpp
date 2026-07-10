class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
         int maximum=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
              if(maximum<sum)
              {
                 maximum=sum;
             }
            if(sum<0)
            {
                sum=0;
            }
        }
        return maximum;
        // for(int i=0;i<nums.size();i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         sum+=nums[j];
        //         maximum=max(maximum,sum);
        //     }
        // }
        // return maximum;
    }
};