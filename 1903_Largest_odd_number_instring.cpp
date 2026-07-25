class Solution {
public:
    string largestOddNumber(string num) {
        // =num.size();
        // if((int)num%2!=0)
        // {
        //     return num;
        // }
        // else   vector<string>result;
        // int n
        // {
        //     for(int i=n-1;i>=0;i--)
        //     {
        //         if((int)num[i]%2!=0)
        //         {
        //             for(int j=i;j<n-i;j++)
        //             {
        //                 result.push_back(num[i]);
        //             }
        //         }
        //         break;
        //     }
        // }
        // return result;
        for(int i=num.size()-1;i>=0;i--)
        {
            if((num[i]-'0')%2!=0)
            {
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};