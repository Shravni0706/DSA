class Solution {
public:
    string reformatNumber(string number) {
        string digits;
        for(char c: number){
            if(isdigit(c)) digits+=c;
        }
        string res;
        int i=0,n=digits.size();
        while(n-i>4){
            res+=digits.substr(i,3);
            res+='-';
            i+=3;
        }
        int rem=n-i;
        if(rem==4){
            res+=digits.substr(i,2);
            res+='-';
            res+=digits.substr(i+2,2);
        }
        else{
            res+=digits.substr(i,rem);
        }
        return res;
    }
};