#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string,vector<string>>mp;

    for(string s:strs) 
    {
        string key=s;
        sort(key.begin(),key.end());
        mp[key].push_back(s);
    
    }
    vector<vector<string>>a;
    for(auto s:mp)
    {
      a.push_back(s.second);
    }
    return a;
        
    }
};