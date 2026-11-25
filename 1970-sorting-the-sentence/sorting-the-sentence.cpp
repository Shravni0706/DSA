class Solution {
public:
    string sortSentence(string s) {
        vector<string> words(9);
        int count = 0;

        stringstream ss(s);
        string word;
        while (ss >> word) {
            int pos = word.back() - '1';   
            word.pop_back();               
            words[pos] = word;
            count++;
        }

        string result;
        for (int i = 0; i < count; i++) {
            if (i > 0) result += ' ';
            result += words[i];
        }
        return result;
    }
};