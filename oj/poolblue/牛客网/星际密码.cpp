#include <stdio.h>
#include <iostream>
using  namespace std;
int main()
{  //쳲��������о������Ͻǵ���
    int fib[10000] = { 0,1,2 };//��ǰ���ÿռ�
    for (int i = 3; i < 10001; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];//����쳲���������
        fib[i] %= 10000;//��ֹ����10000
    }
    int n = 0;
    while (cin >> n)
    {
        int num = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            printf("%04d", fib[num]);//ȡ����Ӧ���Ͻǵ���
        }
        printf("\n");
    }
    return 0;
}