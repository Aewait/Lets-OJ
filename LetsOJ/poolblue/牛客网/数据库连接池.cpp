#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {

    int n=0;
    while(cin>>n)
    {
        string id, op;
        set<string> s;//���ӳ�
        size_t maxcon=0;
        for(int i=0;i<n;i++)
        {
            cin>>id>>op;//����id������
          if(op=="connect")
              s.insert(id);//��������ӣ������
            else
              s.erase(id);//�Ͽ�������ɾ��idԪ��
            
            maxcon= max(maxcon,s.size());//�����������˶��ٸ�Ԫ��
        }
       
      cout<<maxcon<<endl;          
        
    }
    return 0;
}
