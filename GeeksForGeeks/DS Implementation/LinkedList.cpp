/*
    Time Complexity [Singly Linked List]:
    - Access : O(n)
    - Search : O(n)
    - Insertion : O(1)
    - Deletion : O(1)

    Space Complexity: O(n)

 */
#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* next;
};

class LinkedList
{
    public:
        node* root;
        
        LinkedList() { root = NULL; }

        node* newNode(int data)
        {
            node* temp = new node;
            temp->data = data;
            temp->next = NULL;
            return temp;
        }

        void printList()
        {
            node* temp = root;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }

        void push(int data)
        {
            node* tailNode = newNode(data);
            node* temp = root;
            
            if(root == NULL)
            {
                root = tailNode;
                return;
            }
            
            while(temp->next!=NULL)
                temp = temp->next;

            temp->next = tailNode;
        }

        void pop()
        {
            node* tailNode = NULL;
            
            if(root == NULL)
            {
                cout<<"UNDERFLOW";
                return;
            }
            
            tailNode = root;
            root = root->next;
            
            delete tailNode;
        }

        int front()
        {
            if(root == NULL)
                return -1;
            else
                return root->data;
        }
};

int main()
{
    int n,data;
    LinkedList l_list;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        l_list.push(data);
    }

    cout<<"List after each step of deletion:\n";
    l_list.printList();
    
    do{
        cout<<"\nNow deleting first node:"<<l_list.front()<<"\n";
        l_list.pop();
        l_list.printList();
    }while(l_list.root!=NULL);

    return 0;
}