class Solution {
public:
    bool isPerfectSquare(int num) {
       long long  int i;
        if(num<1)return false;
        // if(num==1)return true;
        // for( i=1;i*i<=num;i++)
        // {
        //     if(i*i==num)return true;
        // }
        // return false;
        long left=0;
        long right=num;
        long mid;
        while(left<=right)
        {
            mid=left+(right-left)/2;
            long sq=mid*mid;
            if(sq==num)return true;
            if(sq<num)left=mid+1;
            else
            right=mid-1;
        }
        return false;
    }
};