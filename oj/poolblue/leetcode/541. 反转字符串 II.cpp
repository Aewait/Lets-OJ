//https://leetcode.cn/problems/reverse-string-ii/
//541. ��ת�ַ��� II
class Solution {
public:
    string reverseStr(string s, int k) {
        //ÿ�μ�2k����2k��������з�ת
     for (int i = 0; i < s.size(); i += (2 * k)) {
            // 1. ÿ�� 2k ���ַ���ǰ k ���ַ����з�ת
            // 2. ʣ���ַ�С�� 2k �����ڻ���� k ������תǰ k ���ַ�
            if (i + k <= s.size()) {
                reverse(s.begin() + i, s.begin() + i + k );
                continue;//����һ��2k����
            }
            // 3. ʣ���ַ����� k ������ʣ���ַ�ȫ����ת��
            reverse(s.begin() + i, s.begin() + s.size());
        }
        return s;


    }
};
