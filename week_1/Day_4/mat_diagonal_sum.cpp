#include<vector>
using namespace std;
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,i,j,f;
        int r=mat.size(),c=mat[0].size();
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j || (i+j==r-1))
                   sum=sum+mat[i][j];
            }
        }
       
        return sum;
    }
};