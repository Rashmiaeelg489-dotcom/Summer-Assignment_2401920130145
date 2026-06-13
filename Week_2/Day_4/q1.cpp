#include<string>
#include<algorithm>
using namespace std;
 string reverseWords(string s) {
    string t=""; string f=""; int i=0;
    while(s[i]!='\0')
    {  
     if(s[i]!=' ')
     {
      t=t+s[i];
     }
     else
     {
      reverse(t.begin(),t.end());
      f=f+t+" ";
      t="";
     }
     i=i+1;  
    }
    reverse(t.begin(),t.end());
    f=f+t;
    return f;