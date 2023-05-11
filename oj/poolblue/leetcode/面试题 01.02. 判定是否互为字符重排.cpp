//https://leetcode.cn/problems/check-permutation-lcci/submissions/
//������ 01.02. �ж��Ƿ�Ϊ�ַ�����
class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
     if(s1.size()!=s2.size())
      return false;
     sort(s1.begin(),s1.end());
     sort(s2.begin(),s2.end());
      return s1==s2;
    }
};\
//��ϣ 
//�����ַ���ֻ���� 2626 ��Сд��ĸ��������ǿ���ά��һ������Ϊ 2626 ��Ƶ������ \textit{table}table��
//�ȱ�����¼�ַ��� s 1���ַ����ֵ�Ƶ�Σ�Ȼ������ַ��� s_2s 
//��ȥ able �ж�Ӧ��Ƶ�Σ�������� table[i]<0��˵�� s 2����һ������ s1�еĶ����ַ������� false ����
class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        if (s1.length() != s2.length()) {
            return false;
        }
        vector<int> table(26, 0);
        for (auto& ch: s1) {
            table[ch - 'a']++;
        }
        for (auto& ch: s2) {
            table[ch - 'a']--;
            if (table[ch - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};

