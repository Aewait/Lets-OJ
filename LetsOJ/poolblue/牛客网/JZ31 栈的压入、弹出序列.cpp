#define _CRT_SECURE_NO_WARNINGS
//https ://www.nowcoder.com/practice/d77d11405cc7470d82554cb392585106?tpId=13&&tqId=11174&rp=1&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking
//JZ31 ջ��ѹ�롢��������
class Solution {
public:
    bool IsPopOrder(vector<int> pushV, vector<int> popV) {

        stack<int> st;
        int j = 0;
        for (auto e : pushV)//ѭ����������ջ���н���
        {
            //��ջ
            st.push(e);
            while (!st.empty() && st.top() == popV[j])
            {
                //��ջ
                j++;
                st.pop();

            }
        }
        return st.empty();//��Ԫ��˵��ƥ���ϣ�����ƥ�����

    }

};