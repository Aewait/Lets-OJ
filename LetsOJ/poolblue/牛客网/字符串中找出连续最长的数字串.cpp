//�ַ������ҳ�����������ִ�
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, tmp, ret;
    cin >> str;
    for(size_t i = 0; i < str.size(); ++i)
    {   //��������������
        if(str[i] >= '0' && str[i] <= '9'){
            tmp += str[i];
        }
        else{ // ������ʱ�Ƚ�size��С
            if(tmp.size() > ret.size())
                ret = tmp;
            else
                tmp.clear();
        }
    }
    // i�ߵ�\0��ʱ��Ҳ�п����������ִ������ģ�
    // ����ʱ��Ϊ�Ѿ�����forѭ���ˣ������Ҫ�ٱȽ�һ��
    if(tmp.size() > ret.size())
        ret = tmp;
    else
        tmp.clear();
    cout << ret << endl;
    return 0;
}
