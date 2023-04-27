//https://leetcode.cn/problems/recursive-mulitply-lcci/
//������ 08.05. �ݹ�˷�
class Solution {
public:
// 1��˼·
// ���ҳ��������нϴ����big�ͽ�С���� small��helper()�����������Ǽ���big��small�ĳ˻���������һ������halfProd������big��small�˻���һ�룻
// ��smallΪż������ֱ�ӽ�halfProd�ӱ����ؼ��ɣ���smallΪ����������halfProd�ӱ��Ļ������ٷ���һ��big��
// ÿ�εݹ��൱�ڽ�small����2��ͬʱ��big����2��
// ʱ�临�Ӷ�Ϊ O(s) �� s ��ʾ�������н�С���Ǹ���

    int _multiply(int small,int big)
    {
      if(small==0)
      return 0;
      if(small==1)
      return big;

      int s=small>>1;
      int halfprod=multiply(s,big);

      if(small%2==0)
      return halfprod +halfprod;
      else
      return halfprod+halfprod+big;

    }
    int multiply(int A, int B) {
    int small = A < B? A :B;
    int big   = A < B? B :A;
   return _multiply(small,big);
     
    }
    
};
