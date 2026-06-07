#include<string>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

    sort(ransomNote.begin(), ransomNote.end());
    sort(magazine.begin(), magazine.end());
    
    int i = 0, j = 0;
    int n = ransomNote.size(),m = magazine.size();
    
    while(i < n && j < m)
    {
        if(ransomNote[i] == magazine[j])
        {
            i++; j++;                
        }
        else if(ransomNote[i] > magazine[j])
        {
            j++;                    
        }
        else
        {
            return false;           
        }
    }
    return i == n;                  
    }
};