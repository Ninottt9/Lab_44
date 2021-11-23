#include "node.h"

void Node :: prepare(std :: string str)
{
    data = str;
    previous = 0;
}
void Node :: setData(std :: string str)
{
    data = str;
}
std :: string Node :: getData()
{
    return data;
}
void Node :: setNext(Node * newNode)
{
    next = newNode;
}
Node * Node :: getNext()
{
    return next;
}

void Node :: setPrevious(Node * newNode)
{
    previous = newNode;
}
Node * Node :: getPrevious()
{
    return previous;
}