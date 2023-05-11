//https://leetcode.cn/problems/implement-queue-using-stacks/
class MyQueue {
public:
    MyQueue() { }//���캯����д�ɲ�д
    
    void push(int x) {
      s1.push(x);
    }
    
    void inToOut()//ʹ����ջ������ת�Ƶ����ջ
    {
        while(!s1.empty())
      {
          int x=s1.top();
          s1.pop();
          s2.push(x);
      }
    }
    int pop() {
        
       if(s2.empty())//������ջΪ�գ�ת������
       {
           inToOut();
       }
      int x=s2.top();
      s2.pop();
      return x;
    }
    
    int peek() {
       if(s2.empty())//������ջΪ�գ�ת������
       {
           inToOut();
       }
       int x=s2.top();
       return x;
    }
    
    bool empty() {
       return s1.empty() &&s2.empty();
       
    }
private:
   stack<int> s1;//����ջ
   stack<int> s2;//���ջ
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
