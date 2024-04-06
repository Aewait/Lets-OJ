class Solution {
    vector<vector<int>> retV;
    vector<int> curV;
    // 求子集的回溯函数
    void _subsets(vector<int>& nums,int startIndex)
    {
        // 因为子集包括每一个数单独组成的数组和空数组，所以可以先直接把数组插入
        // 第一次进入函数是插入空数组，第二层递归是插入每个数单独组成的数组
        retV.push_back(curV);
        if(startIndex>=nums.size()){
            return;
        }
        // 回溯的循环
        for(int i = startIndex;i<nums.size();i++){
            // 插入当前数
            curV.push_back(nums[i]);
            // 递归下一层，不能选择相同下标的数
            _subsets(nums,i+1);
            // 回溯当前操作
            curV.pop_back();
        }
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        _subsets(nums,0);
        return retV;
    }
};