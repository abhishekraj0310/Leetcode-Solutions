class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int x=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int b=nums[i];
            while(b>0)
            {
                int r=b%10;  
                count++;
                b/=10;
            }
            if(count%2==0){
            x++;
            count=0;
            }
            else
            count=0;
        }
        return x;
        
    }
};