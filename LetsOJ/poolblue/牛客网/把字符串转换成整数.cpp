//https://www.nowcoder.com/practice/1277c681251b4372bdef344468e4f26e?tpId=13&&tqId=11202&rp=6&ru=/activity/oj&qru=/ta/coding-interviews/question-ranking
//���ַ���ת�������� 
class Solution {
public:
    int StrToInt(string str) {
        int flag=0;//�����������
        long long sum=0;
        for(auto s:str)
        {
            if(s=='-'||s=='+')//�жϵ�һ��
            {  
            if(!(str.find('+',0)||str.find('-',0)))//�����+����-��������λ������0
              return 0;
              flag = s =='-'? 1:0;//�������
            }
            else if (s>='0'&& s<='9')//���ַ���ת���int����
            {
                if(s=='0')
                {
                    if(sum==0)//ǰ�����������У�
                        return 0;
                    else
                        sum=sum*10+0;
                }
                else
                {
                    sum=sum*10 + s-'0';//ת��int���ͣ�
                    
                }
            }
           else
           {
               return 0;
           }
        }
        if(flag)
        {    //����
            sum=-sum;
            if(sum<INT_MIN)//С��int��Сֵ
                return 0;
            return sum;
        }
        else{ //����
            if(sum>INT_MAX)//����int���ֵ
                return 0;
            return sum;
         }
    }
};
