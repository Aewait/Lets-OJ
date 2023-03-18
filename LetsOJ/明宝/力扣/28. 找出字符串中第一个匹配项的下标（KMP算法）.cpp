//28. �ҳ��ַ����е�һ��ƥ������±꣨KMP�㷨�� 
//���������ַ��� haystack �� needle �������� haystack �ַ������ҳ� needle �ַ����ĵ�һ��ƥ������±꣨�±�� 0 ��ʼ������� needle ���� haystack ��һ���֣��򷵻�  -1 ��
//���룺haystack = "sadbutsad", needle = "sad"
//�����0
//���ͣ�"sad" ���±� 0 �� 6 ��ƥ�䡣
//��һ��ƥ������±��� 0 �����Է��� 0 ��
class Solution {
public:
    // ��ȡnext����
    void getNext(int* next, const string &s)
    {
        // init
        int j = 0;// j��ǰ׺ĩβ��Ҳ������ǰ��׺�ĳ���
        next[0] = 0;// next��������������ǰ��׺
        for(int i = 1; i<s.size(); i++)// i�Ǻ�׺ĩβ����1��ʼ
        {
            // no equal
            while(j>0 && s[i] != s[j])
            {
                j = next[j-1];
            }
            // equal
            if(s[i] == s[j])
            {
                j++;
            }
            // next
            next[i] = j;
        }
        
    }
    int strStr(string haystack, string needle) {
        // KMP�㷨
        if(needle.size() == 0)
            return 0;

        int next[needle.size()];
        getNext(next, needle);

        // ������ǰ׺��׺�ĳ��ȣ�ǰ��Ĳ����Ѿ�����ˣ��ʹ��ǿ�ʼ��������Ƚϡ����ӣ�aabaabaaf��aabaaf
        int j = 0; 
        for(int i = 0; i<haystack.size(); i++)
        {
            while(j>0 && haystack[i]!=needle[j])
                j = next[j-1];

            if(haystack[i] == needle[j])
                j++;

            if(j == needle.size())
                return i-needle.size()+1;
        }
        return -1;
    }
};
