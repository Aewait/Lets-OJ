//https://leetcode.cn/problems/remove-duplicates-from-sorted-array/
//26. ɾ�����������е��ظ���
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //˫ָ�����
    int pre=0;
    int next=1;//�����ȣ�next����һλ
    while(next<nums.size())//�������ȣ�next���Ƶ�pre+1��λ�ã�next��pre����һλ
    {
       if(nums[pre]!=nums[next])
       {   
           if(next-pre>1)
           nums[pre+1]=nums[next];
           pre++;
       }
       next++;
    }
    return pre+1;
    }
};
