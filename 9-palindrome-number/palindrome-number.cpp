class Solution {
public:
    bool isPalindrome(int x) {
        bool ispalindrome=false;
        if(x<0){
            return ispalindrome;
        }
        else{
            long reverse=0;
            int original=x;
            while(x>0){
                reverse=reverse*10+(x%10);
                x/=10;
            }
            if(reverse==original)
            ispalindrome=true;
            else
            ispalindrome=false;

            return ispalindrome;
        }
        


    }
};