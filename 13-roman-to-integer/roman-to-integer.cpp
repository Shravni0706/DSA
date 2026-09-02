class Solution {
public:
    int getValue(char c)
    {
        if(c=='I') return 1;
        else if(c=='V')return 5;
        else if(c=='X')return 10;
        else if(c=='L')return 50;
        else if(c=='C')return 100;
        else if(c=='D')return 500;
        else if(c=='M')return 1000;
        else return 0;
    }
    int romanToInt(string s) {
        int num=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            int current=getValue(s[i]);
            int next=(i+1<n)?getValue(s[i+1]):0;
            if (current<next)
                num-=current;
            else
                num+=current;
        }
        return num;
        
    }
};