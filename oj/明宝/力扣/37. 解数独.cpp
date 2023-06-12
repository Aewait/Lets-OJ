//https://leetcode.cn/problems/sudoku-solver/description/
//37. ������

// https://www.programmercarl.com/0037.%E8%A7%A3%E6%95%B0%E7%8B%AC.html#%E6%80%9D%E8%B7%AF

class Solution {
public:
// �ҵ�һ������ͷ��أ�������bool
    bool backtracking(vector<vector<char>>& board)
    {
        // ÿ��
        for(int i = 0; i<board.size(); i++)
        {
            // ÿ��
            for(int j = 0; j<board[0].size(); j++)
            {
                if(board[i][j]=='.')
                {
                    for(char k = '1'; k<='9'; k++)
                    {
                        // ����Ƿ�Ϸ�
                        if(isValid(board, i, j, k))
                        {
                            board[i][j] = k;
                            if(backtracking(board))// �ҵ�һ������ͷ���
                            {
                                return true;
                            }
                            board[i][j] = '.';
                        }
                    }
                    // 9���������꣬ȫ�����Ϸ�ֱ��false
                    return false;
                }
            }
        }
        // �������return true
        return true;
    }

    bool isValid(vector<vector<char>>& board, int row, int col, char val)
    {
        // ��
        for(int i = 0; i<9; i++)
        {
            if(board[i][col] == val)
                return false;
        }
        // ��
        for(int j = 0; j<9; j++)
        {
            if(board[row][j] == val)
                return false;
        }
        // �Ź���
        int startRow = (row/3)*3;
        int startCol = (col/3)*3;
        for(int i = startRow; i<startRow+3; i++)
        {
            for(int j = startCol; j<startCol+3; j++)
            {
                if(board[i][j] == val)
                    return false;
            }
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        backtracking(board);
    }
};
