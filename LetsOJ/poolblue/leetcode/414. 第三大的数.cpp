//https://leetcode.cn/problems/third-maximum-number/
class Solution {
public:
    int thirdMax(vector<int>& nums) {
   long long firstnum=LONG_MIN,secondnum=LONG_MIN,thirdnum=LONG_MIN;
   //firstnumΪ���,secondnumΪ�ڶ���thirdnumΪ������ 
   
   for(auto&n :nums)//���� 
   {
       if(firstnum < n)//����ȵ�һ�󻹴�ȡ����һ�󣬰�ԭ�����ķ��ڵڶ��� 
       {
            thirdnum=secondnum;
            secondnum=firstnum;
            firstnum=n;
       }
       else if(firstnum > n && n >secondnum)//ͬ��ȡ���ڶ���ԭ�ڶ�����Ƶ����� 
       {
           thirdnum=secondnum;
           secondnum=n;
       }
       else if(secondnum >n && n>thirdnum)//ֻ���ڵ�����ȡ�������� 
       {
           thirdnum=n;
       }
   }
   if(thirdnum!=LONG_MIN)//����е����󣬷��ص����� 
   return thirdnum;
   else
   return firstnum;//û�з��ص�һ�� 
    }
}; 
