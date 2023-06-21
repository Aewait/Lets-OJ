//63. ��ͬ·�� II

//https://leetcode.cn/problems/unique-paths-ii/description/
//https://www.programmercarl.com/0063.%E4%B8%8D%E5%90%8C%E8%B7%AF%E5%BE%84II.html#%E6%80%9D%E8%B7%AF


class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        if (obstacleGrid[m - 1][n - 1] == 1 || obstacleGrid[0][0] == 1) //����������յ�������ϰ���ֱ�ӷ���0
            return 0;
        // �����ϰ�������Ķ�����ʼ��Ϊ1�����Ǳ���0
        for(int i = 0; i<m && obstacleGrid[i][0]==0; i++)
            dp[i][0] = 1;
        for(int j = 0; j<n && obstacleGrid[0][j]==0; j++)
            dp[0][j] = 1;
        
        for(int i = 1; i<m; i++)
        {
            for(int j = 1; j<n; j++)
            {
                if(obstacleGrid[i][j] == 1)// �ϰ�������0
                    continue;
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }

        return dp[m-1][n-1];
    }
};
