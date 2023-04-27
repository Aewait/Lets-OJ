//https://leetcode.cn/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int inf = 1e9;//��ʼ���������
     int minPrice=inf;//���ɳ�ʼ��Ϊ0�����ܵ�һ��Ԫ�ر�0����ܶ�
     int maxProfit=0;
     for(int i=0;i<prices.size();i++)//һ�α���
     {
        maxProfit=max(maxProfit,prices[i]-minPrice);//�ԱȽ���ļ۸��ǲ����������
        minPrice=min(prices[i],minPrice);//��������Сֵ
       
     }
     return maxProfit;
    }
}; 
