class Parenthesis {
public:
    bool chkParenthesis(string A, int n) {
       stack<char> b;
        for(auto ch: A)
        {
            switch(ch)
            {
                    case'('://����������ţ���ջ
                     b.push(ch);
                     break;
                    case')'://����������ţ����ջΪ�գ�����false����Ϊ�գ���ջ����ջ
                      if(b.empty())
                      {
                      return false;
                      }
                    b.pop();
                    break;
                    default://����������ַ�������false
                    return false;
            }
            
        }
        return b.empty();
      
    }
};
