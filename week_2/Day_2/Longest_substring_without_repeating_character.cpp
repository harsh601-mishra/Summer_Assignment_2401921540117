
#include<iostream>
#include<algorithm>

using  namespace std;   
   
   int lengthOfLongestSubstring(string s) {
       int hash[256]={-1};
        int left = 0;
        int r=0;
        int maxLength = 0;
        
        for (int left = 0; left < s.size(); left++) {
            if(hash[s[r]] != -1){
                if(hash[s[r]] >= left){
                    hash[s[r]] + 1; 
                }
                
            }
            int len = r-left +1;
            maxLength=max(maxLength,len);
            hash[s[r]] = r;
            r++;
        
        }

        return maxLength;
    }
