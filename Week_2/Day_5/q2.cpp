#include<string>
#include<vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars){

        vector<char>ans;
        int n=chars.size();

        for(int i=0;i<n;)
        {
            char ch=chars[i];
            int cnt=0;

            while(i<n && chars[i]==ch) 
            {
                cnt++;
                i++;
            }

            ans.push_back(ch);

            if(cnt>1)
            {
                string s=to_string(cnt);
                for(char c:s)
                    ans.push_back(c);
            }
        }
        chars=ans;
        return chars.size();
    }
};