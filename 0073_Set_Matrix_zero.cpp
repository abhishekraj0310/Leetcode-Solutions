class Solution {
public:
// void markrow(int i,vector<vector<int>>& matrix)
// {
//     int n = matrix.size();
//         int m= matrix[0].size();
//     for(int j=0;j<m;i++)
//     {
      
//             if(matrix[i][j]!=0)
//             {
//                 matrix[i][j]=-1;
//             }
//     }
// }
// void markcol(int j,vector<vector<int>>& matrix)
// {
//     int n = matrix.size();
//         int m= matrix[0].size();
//     for(int i=0;i<n;i++)
//     {
//             if(matrix[i][j]!=0)
//             {
//                 matrix[i][j]=-1;
//             }
//     }
// }
   void setZeroes(vector<vector<int>>& matrix) {
         int n = matrix.size();
         int m= matrix[0].size();
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     markrow(i,matrix);
//                     markcol(j,matrix);
//                 }
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(matrix[i][j]==-1)
//                 {
//                     matrix[i][j]=0;
//                 }
//             }
//         }
// vector<int> col(m,0);
// vector<int>row(n,0);
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<m;j++)
//     {
//         if(matrix[i][j]==0)
//         {
//             row[i]=1;
//             col[j]=1;
//         }
//     }
// }
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<m;j++)
//     {
//         if(row[i]||col[j])
//         {
//             matrix[i][j]=0;
//         }
//     }
// }
         int col=1;
         for(int i=0;i<n;i++)
         {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    if(j!=0)
                    {
                        matrix[0][j]=0;
                    }
                    else
                    {
                        col=0;
                    }
                }
            }
         }
            for(int i=1;i<n;i++)
            {
                for(int j=1;j<m;j++)
                {
                    if(matrix[i][j]!=0)
                    {
                        if(matrix[0][j]==0 || matrix[i][0]==0)
                        {
                            matrix[i][j]=0;
                        }
                    }
                }
            }
            if(matrix[0][0]==0)
            {
                for(int j=0;j<m;j++)
                {
                    matrix[0][j]=0;
                }
            }
            if(col==0)
            {
                for(int i=0;i<n;i++)
                {
                    matrix[i][0]=0;
                }
            }
         }
    
};