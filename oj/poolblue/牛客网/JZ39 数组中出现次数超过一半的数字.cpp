//JZ39 �����г��ִ�������һ�������
//https://www.nowcoder.com/practice/e8a1b01a2df14cb2b228b30ee6a92163?tpId=13&tqId=11181&ru=/exam/oj
class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        //˼�룺�������������ȣ�����ȥ���������������£�ÿ����ȥһ��������һ������������ô�������������������µ����϶�������
        int cond = -1;//��ʼ������ѡ��cond = -1�� ��ѡ�˵�ͶƱ����cnt = 0
        int cnt = 0;
        for (int i=0; i<numbers.size(); ++i) {//�������飬���cnt=0�� ��ʾû�к�ѡ�ˣ���ѡȡ��ǰ��Ϊ��ѡ�ˣ�++cnt
            if (cnt == 0) {
                cond = numbers[i];
                ++cnt;
            }
            else {//�������cnt > 0, ��ʾ�к�ѡ�ˣ������ǰ��=cond����++cnt������--cnt
                if (cond == numbers[i]) 
                    ++cnt;
                else 
                    --cnt;
            }

        }
        cnt = 0;
        for (const int k :numbers) {//ֱ�����������ϣ������cond�Ƿ�Ϊ����
            if (cond == k) 
                ++cnt;
        }
        if (cnt > numbers.size() / 2) 
            return cond;
        return 0;
    }
};

