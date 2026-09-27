class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int h=haystack.size(),n=needle.size();
        for(int i=0;i+n<=h;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(needle[j]==haystack[i+j]) count++;
                else break;
        }
        if (count==n) return i;
    }
    return -1;
    }
};