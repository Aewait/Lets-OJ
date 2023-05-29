https://leetcode.cn/problems/linked-list-cycle//**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)
         return NULL;
        //slowָ����head��fasָ����haed->next�����ں���whileѭ������
       ListNode *slow=head;
       ListNode *fast=head->next;
       while(slow!=fast)
       {
          if(fast==NULL || fast->next==NULL)//���fast��fast->next��������,֤��û�гɻ�
          {
              return false;
          }
          slow=slow->next;
          fast=fast->next->next;
       }
       return true;//fast��slow������֤������ɻ�
    }
};
