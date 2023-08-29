// https://leetcode.cn/problems/edit-distance/description/ 
//72. �༭����
//https://www.programmercarl.com/0072.%E7%BC%96%E8%BE%91%E8%B7%9D%E7%A6%BB.html#%E6%80%9D%E8%B7%AF
//�������һ��֮�https://leetcode.cn/problems/delete-operation-for-two-strings/description/
class Solution {
public:
// dp[i][j]:��word1[0,i-1]��word2[0,j-1]��ȵ���С����
// if(word1[i-1]==word2[j-1])dp[i][j] = dp[i-1][j-1];// ���ò���
// else dp[i][j] = min(dp[i-1][j]+1, dp[i][j-1]+1, dp[i-1][j-1]+1);// ɾword1��[ɾ/��Ч����ͬ]������+1��ɾword2�ģ�����+1��������ɾ[�൱�ڸ�]������+1��
    int minDistance(string word1, string word2) {
         vector<vector<int>> dp(word1.size()+1, vector<int>(word2.size()+1, 0));
        for(int i = 0; i<=word1.size(); i++) dp[i][0] = i;
        for(int j = 0; j<=word2.size(); j++) dp[0][j] = j;
        for(int i = 1; i<=word1.size(); i++) 
        {
            for(int j = 1; j<=word2.size(); j++)
            {
                if(word1[i-1]==word2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else 
                    dp[i][j] = min(dp[i-1][j]+1, min(dp[i][j-1]+1, dp[i-1][j-1]+1));
            }
        }
        return dp[word1.size()][word2.size()];
    }
};
