//https://www.nowcoder.com/practice/668603dc307e4ef4bb07bcd0615ea677?tpId=37&&tqId=21297&rp=1&ru=/activity/oj&qru=/ta/huawei/question-ranking 
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void cmdLineParse(const string &str)
{   string tmp="";
    vector<string> svec;
    bool flag=false;//�ж��Ƿ����ַ���״̬
    for(int i=0;i<str.size();i++)
    {
                if(str[i] == '"')//�ж��Ƿ����ַ�������ʼ�����
        {
            flag = !flag;//˵�������ַ���״̬
        }
        else if(str[i] == ' ' && !flag)//�жϲ����ķָ������Ƿ�Ϊ�ַ�������
        {
            svec.push_back(tmp);
            tmp = "";
        }
        else//�����Ĳ�������
        {
            tmp += str[i];
        }
     
    }   
        svec.push_back(tmp);//������û�пո���Ҫ׷��
        cout<<svec.size()<<endl;
        for(auto s:svec)
        {
            cout<<s<<endl;
        }
}
int main() {
  string str;
  while (getline(cin,str)) {
    cmdLineParse(str);
  }
  return 0;
}

