/*
    Time Complexity [Stack]:
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

class Stack
{
    public:
        node* top;
        
        Stack() { top = NULL; }

        node* newNode(int data)
        {
            node* temp = new node;
            temp->data = data;
            temp->next = NULL;
            return temp;
        }

        void printStack()
        {
            node* temp = top;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }

        void push(int data)
        {
            node* topNode = newNode(data);
            topNode->next = top;
            top = topNode;
        }

        void pop()
        {
            node* topNode = NULL;
            
            if(top == NULL)
            {
                cout<<"UNDERFLOW";
                return;
            }
            
            topNode = top;
            top = top->next;
            
            delete topNode;
        }

        int peekTop()
        {
            if(top == NULL)
                return -1;
            else
                return top->data;
        }
};

int main()
{
    int n,data;
    Stack stack;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        stack.push(data);
    }

    cout<<"Stack after each step of pop:\n";
    stack.printStack();
    
    do{
        cout<<"\nNow deleting first node:"<<stack.peekTop()<<"\n";
        stack.pop();
        stack.printStack();
    }while(stack.top!=NULL);

    return 0;
}