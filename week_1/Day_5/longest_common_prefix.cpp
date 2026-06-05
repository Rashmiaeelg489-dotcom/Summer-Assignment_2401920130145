#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    int i;string p=strs[0];
  

    for(i=1;i<strs.size();i++)
    {
        while (strs[i].find(p)!=0) 
        {
                p.pop_back();
                if (p.empty())
                 return "";
        }
    }
        return p;
}
};