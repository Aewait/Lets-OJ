https://leetcode.cn/problems/lru-cache-lcci/
class LRUCache {
struct DLinkedNode{
  int key;
  int value;
  DLinkedNode *prev;
  DLinkedNode *next;
  DLinkedNode():key(0),value(0),prev(nullptr),next(nullptr){}//�޲ι��캯�������ڶ�λ��ֵ
  DLinkedNode(int _key,int _value)
  :key(_key),value(_value),prev(nullptr),next(nullptr){}//�вι��캯�����������ݲ���
};
private:
   unordered_map<int,DLinkedNode*>cache;
   DLinkedNode *head;
   DLinkedNode *tail;
   int size;
   int capacity;
public:
    LRUCache(int _capacity):
    capacity(_capacity),size(0)
     {
      // ʹ��αͷ����αβ���ڵ�
       head=new DLinkedNode();
       tail=new DLinkedNode();
       //˫������
       head->next=tail;
       tail->prev=head;

    }
    
    int get(int key) {
       if(!cache.count(key))
         return -1;
        //���key�ڣ�ͨ����ϣ����ж�λ
        DLinkedNode *node =cache[key];
        //���ڵ��Ƶ�����ͷ����Ϊ���ʹ��
        moveToHead(node);
        return node->value;
    }
    
    void put(int key, int value) {
       if(!cache.count(key))
       {
           //���key�����ڣ������½ڵ�
           DLinkedNode *node=new DLinkedNode(key,value);
           //��ӽ���ϣ��
           cache[key]=node;
           // ���ڵ���ӵ�����ͷ����
           addToHead(node);
           ++size;
           if(size>capacity)//�������������С��ɾ��β������ڵ�
           {   //ɾ������β��������¼�ڵ�
               DLinkedNode * removed = removedToTail();
               //ɾ����ϣ��key�ڵ�
               cache.erase(removed->key);
               delete removed;
               size--;
           }
       }
       else //���key���ڣ�ͨ����ϣ����ж�λ���޸�value��Ȼ���Ƶ�ͷ��
       {
          DLinkedNode *node =cache[key];
          node->value=value;
          moveToHead(node);
       }

    }
    //��ӵ�����ͷ��������ͷ������Ϊ���ʹ��
      void addToHead(DLinkedNode* node)
      {
         node->prev=head;
         node->next= head->next;
         head->next->prev=node;
         head->next=node;
         
      }
    //ɾ���ڵ�
      void removeNode(DLinkedNode* node)
      {
        node->prev->next=node->next;
        node->next->prev=node->prev;
        
      }
    //ɾ��ͷ���ڵ�
      void moveToHead(DLinkedNode* node)
      {
        //��ɾ��ԭ���ڵ�λ�ã����Ƶ�ͷ��
        removeNode(node);
        addToHead(node);
      }
    //ɾ��β���ڵ�
      DLinkedNode* removedToTail()//����ɾ���ڵ㣬���ڹ�ϣ��λɾ��
      {
          DLinkedNode * node=tail->prev;
          removeNode(node);
          return node;
      }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
