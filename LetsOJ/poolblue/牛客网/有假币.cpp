//https://www.nowcoder.com/questionTerminal/1d18c0841e64454cbc3afaea05e2f63c
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        if (n == 0) {
            continue;
        }
        int count = 0;
        while (n >= 2) {
            ++count;
            if (n % 3) {
                //������������ȡ���������ر��һ���� n/3 + 1�����
                n = n / 3 + 1;
            }
            else {
                //����������ֱ���������ܹ���ȡ��һ��
                n /= 3;
            }
        }
        cout << count << endl;
    }
    return 0;
}