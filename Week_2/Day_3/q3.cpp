#include<string>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int len=1;len<=n/2;len++)
        {
            if(n %len==0) 
            {
                string sub=s.substr(0,len);
                string str="";
                 for (int i=0;i<n/len;i++)
                {
                    str+=sub;
                }
                if(str==s)
                    return true;
            }
        }
        return false;
    }
};