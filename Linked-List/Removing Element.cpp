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
