//https://leetcode.cn/problems/uncommon-words-from-two-sentences/solutions/1237687/liang-ju-hua-zhong-de-bu-chang-jian-dan-a8bmz/
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> freq;
        
        auto insert = [&](const string& s) {
            stringstream ss(s);
            string word;
            while (ss >> word) {
                ++freq[move(word)];
            }
        };

        insert(s1);
        insert(s2);

        vector<string> ans;
        for (const auto& [word, occ]: freq) {
            if (occ == 1) {
                ans.push_back(word);
            }
        }
        return ans;
    }
};
 
