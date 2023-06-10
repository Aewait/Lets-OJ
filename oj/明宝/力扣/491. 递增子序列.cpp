//491. ����������
//https://leetcode.cn/problems/non-decreasing-subsequences/description/
// https://www.programmercarl.com/0491.%E9%80%92%E5%A2%9E%E5%AD%90%E5%BA%8F%E5%88%97.html#%E6%80%9D%E8%B7%AF

class Solution {
public:
// �ѵ����ڲ������򣡶���������˳�����ҵ����Ĳ���
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int> &nums, int startIndex)
    {
        if(path.size()>1)
        {
            result.push_back(path);
            // ǧ���ܼ�return����ΪҪȡ���Ͻڵ㣡����
        }

        unordered_set<int> uset;// ��set�Ա���Ԫ��ȥ��
        for(int i = startIndex; i<nums.size(); i++)
        {
            // ���������Ҫ���������ǵ��������ظ�Ԫ��
            if((!path.empty() && nums[i]<path.back()) 
            || uset.find(nums[i])!=uset.end()) 
                continue;
            uset.insert(nums[i]);// ��¼���Ԫ���ڱ����ù��ˣ�������治�������ˣ���Ϊÿ��ݹ鶼�ᴴ���µ�uset�����Բ��ö�Ӧ��pop
            path.push_back(nums[i]);
            backtracking(nums, i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        backtracking(nums, 0);
        return result;
    }
};


// �����ù�ϣ��������ȥ�ظ���
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int> &nums, int startIndex)
    {
        if(path.size()>1)
            result.push_back(path);

        int used[201] = {0};
        for(int i = startIndex; i<nums.size(); i++)
        {
            if((!path.empty() && nums[i]<path.back())
            || used[100+nums[i]]==1)
                continue;
            used[100+nums[i]] = 1;
            path.push_back(nums[i]);
            backtracking(nums, i+1);
            path.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        backtracking(nums, 0);
        return result;
    }
