https://leetcode.cn/problems/shortest-unsorted-continuous-subarray/
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {

     //�������С�ڵ���1����������
	if (nums.size() <= 1) return 0;
	int len=nums.size(),low = 0, high = len - 1, maxNum = nums[0], minNum = nums[len - 1];
	//�������ң�����ù����е����ֵ������ǰֵ��MAX���жԱȣ����С�ڵĻ�˵���Ѿ������������б��� �ˣ��Ǿͼ�¼��ǰֵ��һֱ�������б�Ϊֹ����ʱ��벿�ֵ������б��еĵ�һ��ֵ��ҲҪ��ǰ��Ĵ�����ǰ������ֵ����¼�µ�λ��ֵ�Ͳ����ٸĶ��ˣ����ҵ���Ĳ�������
    for (int i = 1; i < len; i++) {
		maxNum = max(maxNum, nums[i]);
		minNum = min(minNum, nums[len - 1 - i]);
		if (nums[i] < maxNum) low = i;
		if (nums[len - 1 - i] > minNum) high = len - 1 - i;
	}

	return low > high ? low - high + 1 : 0; //�����м�λ��
}

}; 
