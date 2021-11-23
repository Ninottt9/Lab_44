#include"twoWaysList.h"

Node * TwoWayList :: getHead()
{
    return head;
}
void TwoWayList :: setHead(Node * newNode)
{
    head = newNode;
}
Node * TwoWayList :: getTail()
{
    return tail;
}
void TwoWayList :: setTail(Node * newNode)
{
    tail = newNode;
}

void TwoWayList :: prepare()
{
    head = 0;
    tail = 0;
}
void TwoWayList :: prepend(std :: string str)
{
    if(!head)
    {
        head = new Node;
        head -> setData(str);
        tail = head;
        return;
    }
    Node * temp = head;
    temp -> setPrevious(new Node);
    temp = temp -> getPrevious();
    temp -> setData(str);
    temp -> setNext(head);
    head = temp;

}
void TwoWayList :: append(std :: string str)
{
    if(!tail)
    {
        tail = new Node;
        tail -> setData(str);
        tail = head;
        return;
    }
    Node * temp = tail;
    temp -> setNext(new Node);
    temp = temp -> getNext();
    temp -> setData(str);
    temp -> setPrevious(tail);
    tail = temp;
    
}
void TwoWayList :: dump()
{
    for(Node * pointer = head; pointer; pointer = pointer -> getNext())
    {
        std :: cout << pointer -> getData() << ' ';
    }
}
void TwoWayList :: dumpBack()
{
    for(Node * pointer = tail; pointer; pointer = pointer -> getPrevious())
    {
        std :: cout << pointer -> getData() << ' ';
    }
}
bool TwoWayList :: empty()
{
    return head == nullptr;
}
void TwoWayList :: clear()
{
    if(!empty())
    {
        for(Node * temp = head; temp; temp = temp -> getNext())
        {
            delete temp;
        }
        head = nullptr;
        tail = nullptr;
    }
}