#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
};

void createNode(int val, Node **head, Node **next)
{
    Node *tmp=new Node;
    tmp->val=val;
    tmp->next=NULL;
    if(*head)
    {
        (*next)->next=tmp;
        (*next)=tmp;
    }
    else
        (*head)=(*next)=tmp;
}

void removeNode(Node **node, Node **prev, Node **head)
{
    if((*prev))
    {
        (*prev)->next=(*node)->next;
        delete (*node);
        (*node)=(*prev)->next;
    }
    else
    {
        (*prev)=(*node)->next;
        delete (*node);
        (*node)=(*prev);
        (*head)=(*prev);
        (*prev)=NULL;
    }
}

int main()
{
    Node *head=NULL, *next=NULL;
    createNode(10, &head, &next);
    createNode(12,&head,&next);
    createNode(14, &head, &next);
    Node *node=head, *prev=NULL;
    while(node)
    {
        if((node->val)==10)
        {
            removeNode(&node,&prev,&head);
        }
        prev=node;
        node=node->next;
    }
    while(head)
    {
        cout<<head->val<<endl;
        head=(head->next);
    }
    return 0;
}
