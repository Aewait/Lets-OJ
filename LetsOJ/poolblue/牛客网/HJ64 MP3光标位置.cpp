//https://www.nowcoder.com/practice/eaf5b886bd6645dd9cfb5406f3753e15?tpId=37&tqId=21287&ru=/exam/oj
//HJ64 MP3���λ��
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n=0;
  string cmd("");
  int num=1;
  while(cin>>n>>cmd)
  {   
     
          //���������б��1-10��num����ǰ������ţ�first�ǵ�ǰҳ���ĵ�һ�׸�
      if(n<=4)//�������С�ڵ���4
      {   
           for(int i=0;i<cmd.size();i++)
        {
          //��������
          if(num==1 && cmd[i]=='U')
              num=n;
          else if(num==n && cmd[i]=='D')
              num=1;
          else if(cmd[i]=='U')
            num--;
           else
              num++;
          }  
          for(int i=1;i<=n;i++)//���
            cout<<i<<" ";//������ż������ո�
            cout<<endl;
            cout<<num<<endl;
        
      }
      else//������Ŵ�����
      { int first=1;
        for(int i=0;i<cmd.size();i++) 
        {
           //��������
           if(num==1 && cmd[i]=='U')
           {
               first=n-3;
               num=n;
           }
           else if(first==n-3 && num==n &&cmd[i]=='D')
              first=num=1;
           else if(first!=1 && num==first &&cmd[i]=='U')
             {
                 first--;
                 num--;
             }
            else if(first!=n-3 && num==first+3 &&cmd[i]=='D')
            {
                first++;
                num++;
            }
            else if(cmd[i]=='U')
              num--;
            else 
              num++;
        }
        for(int i=first;i<=first+3;i++)//�����ǰ�б�
          cout<<i<<" ";//������ż������ո�
          cout<<endl;
          cout<<num<<endl;
      }
     }     
  
  return 0; 
}

