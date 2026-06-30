class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int n=nums.size();
        // int count =0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(nums[i]==nums[j])
        //         {
        //             count++;
        //             for(int a=j;a<n-1;a++)
        //             {
        //                 nums[a]=nums[a+1];
        //             }
        //             n--;
        //             j--;
        //         }
        //     }
        // }
        // auto it=unique (nums.begin(),nums.end());
        // return distance(nums.begin(),it);              
    //     int k=1;
    //     for(int i=1;i<nums.size();i++)
    //     {
    //         if(nums[i]!=nums[k-1])
    //         {
    //             nums[k]=nums[i];
    //             k++;
    //         }
    //     }    
    //     return k;                                                                                                   
    // }
    // for(auto it=nums.begin();it!=nums.end();it++)
    // {
    //     while(it!=nums.end()&&next(it)!=nums.end())
    //     {
    //         if(*it==*next(it))
    //         {
    //             it=nums.erase(it);
    //         }
    //         else
    //         it++;
    //     }
    // }
    // return nums.size();
    int i=0;
    for(int j=1;j<nums.size();j++)
    {
        if(nums[i]!=nums[j])
        {
            nums[i+1]=nums[j];
            i++;
        }
    }
    return i+1;
    }
};