//https://www.nowcoder.com/practice/b58434e200a648c589ca2063f1faf58c?tpId=188&&tqId=38555&rp=1&ru=/activity/oj&qru=/ta/job-code-high-week/question-ranking
//NC21 ������ָ�����䷴ת
 /**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

class Solution {
public:
    /**
     * 
     * @param head ListNode�� 
     * @param m int���� 
     * @param n int���� 
     * @return ListNode��
     */
    ListNode* reverseBetween(ListNode* head, int m, int n) {
       if(head==nullptr||head->next==nullptr||m==n)
           return head;
        //������ʱͷ��㣬����ͳһ���е�������д��������Ƿ�ת������ӵ�һ���ڵ㿪ʼ
      ListNode* new_head =new ListNode(1);
        new_head->next=head;
        //preָ��ת�������ǰ���ڵ�
     ListNode *pre =new_head;
        for(int i=1;i<m;i++)
        {   
            pre=pre->next;
            //headָ��ת��������ײ�
            head=pre->next;
    
        }
        for(int i=m;i<n;i++)
        {
            //��p�ڵ�ժ�½����������ͷ������
            ListNode *p =head->next;
            head->next=p->next;
            p->next=pre->next;
            pre->next=p;
        }
        head=new_head->next;
        delete new_head;
        return head;
        
         
    }
};
