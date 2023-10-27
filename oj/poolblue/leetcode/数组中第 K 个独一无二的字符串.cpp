//https://leetcode.cn/problems/kth-distinct-string-in-an-array/submissions/477801316/
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        // ά�� arr ��ÿ���ַ�����Ƶ��
        unordered_map<string, int> freq;
        for (const string& s: arr){
            if (!freq.count(s)){
                freq[s] = 0;
            }
            ++freq[s];
        }
        // ���� arr Ѱ�ҵ� k ����һ�޶����ַ���
        for (const string& s: arr){
            if (freq[s] == 1){
                --k;
                if (k == 0){
                    return s;
                }
            }
        }
        return "";
    }
};


