#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int r = matrix.size();
    int c = matrix[0].size();

    int sr=0,er=r-1;
    int sc=0,ec=c-1;

    vector<int>ans;
    int total=r*c;
    int cnt=0;

    while(cnt<total) 
    {
        for (int i=sc;i<=ec && cnt<total;i++) 
        {
            ans.push_back(matrix[sr][i]);
            cnt++;
        }
        sr++;


        for (int i=sr;i<=er && cnt<total;i++) {
            ans.push_back(matrix[i][ec]);
            cnt++;
        }
        ec--;
        for (int i=ec;i>=sc && cnt<total;i--) {
            ans.push_back(matrix[er][i]);
            cnt++;
        }
        er--;

        for (int i=er;i>=sr && cnt<total;i--) {
            ans.push_back(matrix[i][sc]);
            cnt++;
        }
        sc++;
    }
    return ans;
    }
};