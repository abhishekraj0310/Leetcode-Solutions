class Solution {
public:
long long ncr(int r,int c)
{
    long long ans=1;
    for(int i=0;i<c;i++)
    {
        ans=ans*(r-i);
        ans=ans/(i+1);
    }
    return ans;
}
    vector<int> getRow(int rowIndex) {
        vector<int>result;
        for(int i=0;i<=rowIndex;i++)
        {
            result.push_back(ncr(rowIndex,i));
        }
        return result;
    }
};