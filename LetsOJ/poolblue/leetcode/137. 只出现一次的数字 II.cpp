//https://leetcode.cn/problems/single-number-ii/
//137. ֻ����һ�ε����� II 
class Solution {
public:
    int singleNumber(vector<int>& nums) {
    unordered_map<int, int> freq;//���ù�ϣӳ��
        for (int num: nums) {
            ++freq[num];
        }
        int ans = 0;
        for (auto [num, occ]: freq) {
            if (occ == 1) {//�ҳ���һ�γ��ֵ�Ԫ��
                ans = num;
                break;
            }
        }
        return ans;

    }

