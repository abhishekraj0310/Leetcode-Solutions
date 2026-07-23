#include<iostream>
using namespace std;
int ncr(int n,int r)
{
    int res=1;
    for(int i=0;i<r;i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main()
{
    int r;
    cout<<"Enter the row number: "<<endl;
    cin>>r;
    // cout<<"Enter the column number: "<<endl;
    // cin>>c;
    // int result=ncr(r-1,c-1);
    // cout<<"Element at "<<r<<"th row"<<"and "<<c<<"th column"<<"is"<<result<<endl;
    int ans=1;
    cout<<ans<<endl;
        for(int i=1;i<r;i++)
    {
        ans=ans*(r-i);
        ans=ans/i;
        cout<<ans<<" ";
    }
    return 0;
}
class Solution {
public:
vector<int> ncr(int r)
{
    vector<int>check;
    long long res=1;
    check.push_back(1);
    for(int c=1;c<r;c++)
    {
        res=res*(r-c);
        res=res/(c);
        check.push_back(res);
    }
    return check;
}
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        for(int i=1;i<=numRows;i++)
        {
            result.push_back(ncr(i));
        }
        return result;
    }
};