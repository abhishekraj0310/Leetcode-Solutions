class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> ans(n, vector<int>(m));  
    //     for(int i=0;i<a;i++)
    //     {
    //         for(int j=i+1 ;j<b;j++)
    //         {
    //            swap(matrix[i][j],matrix[j][i]);
    //         }
    //     }
    //   for(int j=0;j<m;j++)
    //   {
    //     reverse(matrix[j].begin(),matrix[j].end());
    //   }
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //     {
    //         ans[j][n-1-i]=matrix[i][j];
    //     }
    // }
    // matrix=ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(matrix[i].begin(),matrix[i].end());
    }
    }
};