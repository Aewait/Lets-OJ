#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    while (cin >> num)
    {
        int ans = 0;
        for (int i = 0; i < num.size(); i++)
        {
            ans += num[i] - '0';//ȡÿһλ�ַ�������ת��������
        }
        int sum = 0;
        while (ans)//��������
        {
            sum += ans % 10;//ȡ���λ
            ans = ans / 10;//���ڶ�λ�û������λ
        }
        cout << sum << endl;
    }
    return 0;
}