//https://www.nowcoder.com/questionTerminal/f11155006f154419b0bef6de8918aea2
# include <bits/stdc++.h>
using namespace std;

struct list_node{
    int val;
    struct list_node * next;
};

list_node * input_list(void)
{
    int n, val;
    list_node * phead = new list_node();
    list_node * cur_pnode = phead;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &val);
        if (i == 1) {
            cur_pnode->val = val;
            cur_pnode->next = NULL;
        }
        else {
            list_node * new_pnode = new list_node();
            new_pnode->val = val;
            new_pnode->next = NULL;
            cur_pnode->next = new_pnode;
            cur_pnode = new_pnode;
        }
    }
    return phead;
}

list_node * reverse(list_node * Rhead)
{
    list_node * prev=nullptr;
    list_node * cur=Rhead,*next=cur->next;
    while(cur)
    {
        cur->next=prev;
        prev=cur;
        cur=next;
        next=next->next;
    }
    return prev;
}
list_node * reverse_list(list_node * head, int L, int R)
{
   //�����ڱ��ڵ�
    list_node * phead= new list_node();
    phead->next=head;
    list_node * prevnode=phead,*nextnode=nullptr,*Rhead=nullptr,*Rtail=nullptr;
   
    //�ҵ���ת�����ǰһ���ڵ�
   for(int i=0;i<L-1;i++)
   {
       prevnode=prevnode->next;
   }
    Rhead=prevnode->next;//��ת�����ͷ���
    Rtail=Rhead;
    //�ҵ���ת����β�ڵ�
    for(int i=0;i<R-L;i++)
    {
        Rtail=Rtail->next;
     }
    nextnode=Rtail->next;//��ת����β�ڵ����һ���ڵ�
    
     //�Ȱ�Rtail>next=nullptr�����ڷ�ת��������Ϊ�����ڵ�
    Rtail->next=nullptr;
    //��ת
    list_node * newhead = reverse(Rhead);
    
    //����ԭ����
   prevnode->next=newhead;
   Rhead->next=nextnode;
   list_node * list=phead->next;
    delete phead;
    return list;
    
    
}

void print_list(list_node * head)
{
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    puts("");
}


int main ()
{
    int L, R;
    list_node * head = input_list();
    scanf("%d%d", &L, &R);
    list_node * new_head = reverse_list(head, L, R);
    print_list(new_head);
    return 0;
} 
