//https://www.nowcoder.com/practice/5a0a2c7e431e4fbbbb1ff32ac6e8dfa0?tpId=122&tqId=33670&ru=/exam/oj
// WY24 ϴ��
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int T;
    cin>>T;
    int n=0,k=0;
   while(T--)
   {
       cin>>n>>k;
       int num=2*n;
       vector<int> card(num);//�Ȱѿռ俪��
       for(int i=0;i<num;i++)//������
       {
           cin>>card[i];
       }
      
       for(int i=0;i<k;i++)
       { 
           vector<int> tmp(card.begin(),card.end());//��������
           for(int j=0;j<n;j++)//ֻ������n����Ϊ��Ϊ������
           {
               card[2*j] = tmp[j]; //���ֵ����ŷŵ�λ�� 
               card[2*j+1] = tmp[j+n];//���ֵ����ŷŵ�λ��
           }
       }

        //���ϴ�Ƶ�˳��
         for(int i=0; i<num-1; ++i) 
        {
         cout<<card[i]<<" "; 
        } 
        cout<<card[num-1]<<endl; //���һ���ƺ��治���пո�
         
   }
   return 0;
}

