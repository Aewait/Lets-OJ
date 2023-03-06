// https://www.lanqiao.cn/problems/553/learning/
#include<iostream>
#define MAX 105
using namespace std;
int n, m, sum = -0x3f3f3f3f;
int map[MAX][MAX];
void dfs(int x, int y, int w)
{
    w += map[x][y];
    if (x == n && y == m)
    {
        if (w > sum)// ��̬�滮����ֿ����໥�Ƚϣ�ѡ��������ĿҪ����Ǹ�
            sum = w;
        else
            return;
    }

    int next[][2] = { {1,0}, {0,1}, {2,0}, {0,2}, {3,0}, {0,3}, {1, 1}, {1, 2}, {2, 1} };// ��һ����9�ֿ���

    for (int i = 0; i < 9; i++)
    {
        int wx = x + next[i][0];
        int wy = y + next[i][1];// �ҵ���һ���λ��

        if (wx <= n && wy <= m)
            dfs(wx, wy, w);// ��̬�滮
    }
}
int main()
{
    cin >> n >> m;//����n�У�m�� 
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> map[i][j];
    dfs(1, 1, 0);//1��1��ǰλ�� 0�ǳ�ʼȨֵ 
    cout << sum;
    return 0;
}