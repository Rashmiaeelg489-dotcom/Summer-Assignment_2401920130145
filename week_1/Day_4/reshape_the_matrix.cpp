#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int r1=mat.size();
        int c1=mat[0].size();
        if(r1*c1!=r*c)
           return mat;
        vector<vector<int>>m(r,vector<int>(c));
        int row=0,col=0;
        for(int i=0;i<r1;i++)
        {
         for (int j=0;j<c1;j++)
         {
            m[row][col]=mat[i][j];
            col++;
            if(col==c)
            {
            col=0;
            row++;
            }
        }
    }
   return m;
}
};