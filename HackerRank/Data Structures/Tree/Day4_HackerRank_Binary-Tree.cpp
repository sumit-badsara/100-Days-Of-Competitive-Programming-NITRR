#include <bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

void printPreOrder(node* root)
{
    if(root==NULL)
        return;
    
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printPostOrder(node* root)
{
    if(root==NULL)
        return;
    
    printPreOrder(root->left);
    printPreOrder(root->right);
    cout<<root->data<<" ";
}

void printInOrder(node* root)
{
    if(root==NULL)
        return;
    
    printPreOrder(root->left);
    cout<<root->data<<" ";
    printPreOrder(root->right);
}

node* newNode(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

class BinaryTree{
    public:
        node* root;
        BinaryTree()
        {
            root = NULL;
        }

        void insertNode(int data)
        {
            node* nodeInsert = newNode(data);
            queue <node*> nodeQueue;
            
            if(root==NULL)
            {
                root = nodeInsert;
                return;
            }
            
            nodeQueue.push(root);

            while(!nodeQueue.empty())
            {
                node* temp = nodeQueue.front();
                nodeQueue.pop();

                if(temp->left!=NULL)
                    nodeQueue.push(temp->left);
                else
                {
                    temp->left = nodeInsert;
                    return;
                }
                if(temp->right!=NULL)
                    nodeQueue.push(temp->right);
                else
                {
                    temp->right = nodeInsert;
                    return;
                }
            }
        }

        void preOrder() { printPreOrder(root); }

        void postOrder() { printPostOrder(root); }

        void inOrder() { printInOrder(root); }

        void topView() {

            queue <pair<node*,int>> Que;
            map<int,int> level;
            Que.push({root,0});
            
            int val,min_level=1000007,max_level=-1000007;
            node* curr_node=NULL;
            
            while(!Que.empty())
            {
                curr_node = Que.front().first;
                val = Que.front().second;
                Que.pop();
                
                if(!level[val])
                {
                    level[val] = curr_node->data;
                    if(min_level>val)
                        min_level=val;
                    if(max_level<val)
                        max_level=val;
                }
                if(curr_node->left!=NULL)
                    Que.push({curr_node->left,val-1});
                if(curr_node->right!=NULL)
                    Que.push({curr_node->right,val+1});
            }

            for(int i=min_level;i<=max_level;i++)
                cout<<level[i]<<" ";   
        }

        void levelOrder() {
            queue <node*> Que;
            Que.push(root);
            
            while(!Que.empty())
            {
                cout<<Que.front()->data<<" ";
                if(Que.front()->left!=NULL)
                    Que.push(Que.front()->left);
                if(Que.front()->right!=NULL)
                    Que.push(Que.front()->right);
                Que.pop();
            }
        }

};

int main()
{
    BinaryTree tree;
    
    int n,temp;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        tree.insertNode(temp);
    }

    cout<<"\nPreorder:\n";
    tree.preOrder();

    cout<<"\n\nInorder:\n";
    tree.inOrder();

    cout<<"\n\nPostorder:\n";
    tree.postOrder();
    
    cout<<"\n\nTop View:\n";
    tree.topView();

    cout<<"\n\nLevel Order Traversal:\n";
    tree.levelOrder();

    cout<<"\n\nDay 4/100 : #100DaysOfCompetitiveCodingNITRR\n\n";
    return 0;
}