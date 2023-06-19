//https://leetcode.cn/problems/jump-game-ii/description/
//45. ��Ծ��Ϸ II
// https://www.programmercarl.com/0045.%E8%B7%B3%E8%B7%83%E6%B8%B8%E6%88%8FII.html#%E6%80%9D%E8%B7%AF

class Solution {
public:
// ̰������С�Ĳ����������ĸ��Ƿ�Χ��ֱ�����Ƿ�Χ�������յ㣬�����Χ����С����һ���������������ùܾ�������ô���ģ���������һ��������һ����λ����������λ��
// ��i<curCover��;���κ�һ��λ�Ӷ��п�����Ҫ������һ�������ⲻ��Ҫ����i==curCoverʱ������һ���ĸ��Ƿ�Χ����
    int jump(vector<int>& nums) {
        if(nums.size() == 1)
            return 0;
        int curCover = 0;
        int nextCover = 0;
        int result = 0;
        for(int i = 0; i<=nums.size(); i++)
        {
            nextCover = max(i+nums[i], nextCover);// ������һ��������Զ�����±�
            if(i==curCover)// ������ǰ������Զ�����±�
            {
                result++;
                curCover = nextCover;
                if(nextCover>=nums.size()-1) // ��ǰ������Զ�ൽ�Ｏ���յ㣬������ans++�����ˣ�ֱ�ӽ���
                    break;
            }
        }
        return result;
    }
};

// ���Ƶ��򵥵�ǰ���� 
//https://leetcode.cn/problems/jump-game/description/
//55. ��Ծ��Ϸ

//https://www.programmercarl.com/0055.%E8%B7%B3%E8%B7%83%E6%B8%B8%E6%88%8F.html#%E6%80%9D%E8%B7%AF
class Solution {
public:
// ��������������ĸ��Ƿ�Χ�Ƿ�������һ��Ԫ���±�
    bool canJump(vector<int>& nums) {
        int cover = 0;
        for(int i = 0; i<=cover; i++)
        {
            cover = max(i+nums[i], cover);
            if(cover>=nums.size()-1)
            {
                return true;
            }
        }
        return false;
    }
};
