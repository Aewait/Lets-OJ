#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int T,n,k;
    cin >> T;
    while(T--)
    {
        cin >> n >> k;
        int num = 2 * n;
        vector<int> card(num);

        for(int i = 0;i < num;i++)
            cin >> card[i];

        //��ʼϴ��
        for(int i = 0;i < k;++i)
        {
            vector<int> tmp(card.begin(),card.end());
            for(int j = 0;j < n;j++)
            {
                card[2*j] = tmp[j];//�������ŷŵ�λ��
                card[2*j+1] = tmp[j+n];//�������ŷŵ�λ��
            }
        }

        //���ϴ�Ƶ�˳��
        for(int i = 0;i < num -1 ;++i)
        {
            cout << card[i] << " ";
        }
        cout << card[num-1] << endl;
    }
    return 0;
}

