//https://leetcode.cn/problems/check-whether-two-strings-are-almost-equivalent/
class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> freq(26);//����ӳ���
        auto n = word1.size();
        for (size_t i = 0; i < n; ++i) //����Ƶ������
        {
            freq[word1[i]-'a']++;
            freq[word2[i]-'a']--;
        }
        for (const auto& n : freq) {
            if (n > 3 || n < -3) { //�������3�ξͷ���false
                return false;
            }
        }
        return true;
    }
};
// class Solution {
// public:
//     bool checkAlmostEquivalent(string word1, string word2) {
//         unordered_map<char, int> freq;   // Ƶ�����ϣ��
//         for (auto ch: word1){
//             ++freq[ch];
//         }
//         for (auto ch: word2){
//             --freq[ch];
//         }
//         // �ж�ÿ���ַ�Ƶ�����Ƿ��С�ڵ��� 3
//  return all_of(freq.cbegin(), freq.cend(), [](auto&& x) { return abs(x.second) <= 3; };
//     }
// };

 
