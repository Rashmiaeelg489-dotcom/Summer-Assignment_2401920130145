#include<vector>
#include<climits>
using namespace std;
class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
        int i,j;int n=nums.size(),m1=INT_MIN,sum=0;
        for(i=0;i<n;i++)                       
        {   
            sum=sum+nums[i];
            if(sum>m1)
                 m1=sum;
            if(sum<0)
             sum=0;
        }
        return m1;
        }
};