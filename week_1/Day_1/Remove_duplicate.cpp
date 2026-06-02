#include<vector>
#include<set>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& n)
    {
        set<int> st;int c=0;
        for(int i=0;i<n.size();i++)
           st.insert(n[i]);
        
        for(int y:st)
        {
            n[c]=y;
            c++;
        }
        return c;   
    }
};