class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        vector <int> onePos;
        for (int i=0;i<n;i++){
            if (s[i]=='1')onePos.push_back(i);

        }
        int totalOnes=onePos.size();
        if (totalOnes<k)return "";
        int bestLen=INT_MAX;
        string best="";

        for(int i=0;i+k-1<totalOnes;i++)
        {
            int start =onePos[i];
            int end =onePos[i+k-1];
            int length = end - start +1;

            if(length<bestLen)
            {
                bestLen=length;
                best=s.substr(start,length);
            }
            else if (length==bestLen){
                string candidate =s.substr(start,length);
                if (candidate < best){
                    best=candidate;
                }
            }
        }
        return best;
        
    }
};
