//https://leetcode.cn/problems/merge-sorted-array/
    class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=nums1.size()-1;//�±�Ϊnums1���һ��Ԫ��
        //��ס�±�
        m--;
        n--;
        while(n>=0)//��nums1���ʼ����Ԫ�أ��ֱ��������������Ԫ�ؽ��бȽ�
        {   
            while(m>=0 && nums1[m]>nums2[n])//����һ����������Ԫ�ش��ڵڶ�����������Ԫ��
            {
                swap(nums1[i--],nums1[m--]);//Ϊ���Ԫ�أ�����������������󣬲��ݼ�
            }
            swap(nums1[i--],nums2[n--]);//��֮������ڶ�����������Ԫ�أ����ݼ�
        }

        }
    };
