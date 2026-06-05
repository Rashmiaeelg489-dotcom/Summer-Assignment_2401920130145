#include<vector>
#include<string>
using namespace std;
class Solution {
    private:
    bool valid(char ch)
    {
        if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') ||(ch>='0' && ch<='9'))
           return 1;
        return 0;
    }
    char tolowercase(char ch)
    {
        if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
           return ch;
        else
         {
            char c=ch-'A'+'a';
            return c;
         }
        
    }
    bool checkpali(string a)
    {  int st=0,e=a.size()-1;
        while(st<=e)
        {
            if(a[st]!=a[e])
              return 0;
            else
            {
                st++;
                e--;
            }
        }
        return 1;
    }
public:
    bool isPalindrome(string s) {
        //remove faltu character
        int i=0;
        string temp="";
        for(i;i<s.length();i++)
        {
            if(valid(s[i]))
            temp.push_back(s[i]);
        }
        //lowercase
        for(i=0;i<temp.length();i++)
        {
            temp[i]=tolowercase(temp[i]);
        }
        return checkpali(temp);  
    }
};