class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int max=nums.size();
        // int realsum=(max*(max+1))/2;
        // int sum=0;
        // for(int i=0;i<max;i++)
        // {                                   //BETTER APPROACH
        //     sum+=nums[i];
        // }
        // return realsum-sum;


        //OPTIMAL APPROACH
        int XOR1=0;
        int XOR2=0;
        for(int i=0;i<max;i++)
        {
            XOR1=XOR1^(i+1);
            XOR2=XOR2^nums[i];
        }
        return XOR1^XOR2;
        
    }
};