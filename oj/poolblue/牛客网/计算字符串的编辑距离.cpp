#include <iostream>
#include <string>
using namespace std;
int main() {
   string s1;
   string s2;
   while(cin>>s1>>s2)
   {    int count=0;//����
       if(s1.size()==s2.size())//���ַ����ĳ������ʱ��Ҫ�滻
       {
           for(int i=0;i<s2.size();i++)
           {
               if(s1[i]!=s2[i])
               {
                    s1[i]=s2[i];//ֱ���滻
                     count+=2;//�滻������ɾ��һ�Σ�
               }
           }
       }
       else//���ַ����ĳ��Ȳ����ʱ��Ҫ��ɾ
       {
           if(s1.size()>s2.size())//��ԭ�ַ����������ַ���ʱ��Ҫɾ��
           {
               for(int i=0;i<s1.size();i++)
               {
                   if(s1[i]!=s2[i])
                   {
                       s1.erase(i,1);
                       count++;//ɾ������
                   }       
               }
           }
           else//��ԭ�ַ���С�����ַ���ʱ��Ҫ����
           {
               for(int i=0;i<s2.size();i++)
               {
                   if(s1[i]!=s2[i])
                   {
                      s1.insert(i, 1, s2[i]);
                       count++;//���Ӽ���
                   }
               }
           }
       }
       cout<<count<<endl;
   }
    return 0;
}
