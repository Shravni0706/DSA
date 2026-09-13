class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string doubled= s+s;
        int n=goal.size();
        for (int i=0;i<=(int)doubled.size()-n;i++){
            if(doubled.substr(i,n)==goal) return true;
        }
        return false;
    }
};