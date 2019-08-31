/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0, sum = 0;
        ListNode *templ1 = l1, *templ2 = l2;
        ListNode *prev = NULL, *prevl1=NULL, *prevl2 = NULL;
        
        ListNode* newNode = new ListNode(1);
        newNode->next = NULL;
        
        while(templ1!=NULL && templ2!=NULL)
        {
            sum = templ1->val + templ2->val + carry;
            if(sum > 9)
            {
                carry = 1;
                sum = sum % 10;
            }
            else
                carry = 0;
            
            templ1->val = sum;
            templ2->val = sum;
            
            prevl1 = templ1;
            prevl2 = templ2;
            
            templ1 = templ1->next;
            templ2 = templ2->next;
        }
        
        
        if(templ1==NULL)
        {
            l1 = l2;
            templ1 = templ2;
            prev = prevl2;
        }
        else
            prev = prevl1;
        
        
        while(templ1!=NULL)
        {
            if(!carry)
                break;
            
            sum = templ1->val + carry;
            
            if(sum > 9)
            {
                carry = 1;
                sum = sum % 10;
            }
            else
                carry = 0;
            
            templ1->val = sum;
            
            prev = templ1;    
            templ1 = templ1->next;
        }
        
        if(carry)
            prev->next = newNode;
        
        return l1;
    }
};