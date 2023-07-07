//https://leetcode.cn/problems/word-break/description/
//139. ���ʲ��

//https://www.programmercarl.com/0139.%E5%8D%95%E8%AF%8D%E6%8B%86%E5%88%86.html#%E6%80%9D%E8%B7%AF 

class Solution {
public:
// ������������������Ϊaba��aab�����ֽ��������ƴ�ӵ�˳�����н�����.�����ȱ��������ٱ�����Ʒ
// dp[i]��ζ�ų���Ϊi���ַ���s�Ƿ�������ֵ��г��ֵĵ���ƴ��
// ���ȷ��dp[j]��true���� [j, i] ���������Ӵ��������ֵ����ôdp[i]һ����true����j < i 
// ���Ե��ƹ�ʽ��if([j, i] ���������Ӵ��������ֵ��� && dp[j]��true) ��ô dp[i] = true��
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> wordSet(wordDict.begin(), wordDict.end());// set�������
        vector<bool> dp(s.size()+1, false);
        dp[0] = true;
        for(int i = 1; i<=s.size(); i++)// ��������
        {
            for(int j = 0; j<i; j++)// ������Ʒ
            {
                string word = s.substr(j, i-j);//substr(��ʼλ�ã���ȡ�ĸ���)
                if(wordSet.find(word)!=wordSet.end() && dp[j])
                    dp[i] = true;
            }
        }
        return dp[s.size()];
    }
};
