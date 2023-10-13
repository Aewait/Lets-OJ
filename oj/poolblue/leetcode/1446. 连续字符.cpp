//https://leetcode.cn/problems/consecutive-characters/submissions/473962772/ 
class Solution {
public:
    int maxPower(string s) {
        const int len = s.size();
        // ��һ������maxLen��¼���������ͬ�ַ��ĳ���
        int maxLen = 0;
        for (int i = 0; i < len; i++) // ö�����������ͬ�ַ��Ŀ�ʼλ�õ�index
        {
            int count = 1; // count: ��ǰ��ѭ����������ͬ�ַ��ĳ���, ����ֵ������1, ���������ʼ��Ϊ1
            for (int j = i + 1; j < len; j++) // �ӿ�ʼλ�õ�index�ĺ�һ���ַ�����ö��, ������ͬ���ַ���break, ����������ͬ�ļ�������+1
            {
                if (s[j] == s[i])
                    count++;
                else break;
            }
            maxLen = max(maxLen, count);  // �����ǰ��ѭ���г��ָ����������ͬ�ַ����Ⱦ͸���֮
        }
        return maxLen;
    }
};



