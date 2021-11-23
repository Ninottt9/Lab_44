/**
    twoWayList header
    @file twoWaysList.cpp
    @author Maksym Kazhaiev
*/

#pragma once
#include "node.h"

class TwoWayList
{
    public:
        /**
        gets the head address

        @return returns the address of the head
        */      
        Node * getHead();

        /**
        sets the address to the head

        @param address to be set to the node
        */  
        void setHead(Node *);

        /**
        gets the head address

        @return returns the address of the head
        */  
        Node * getTail();

        /**
        sets the address to the head

        @param address to be set to the node
        */ 
        void setTail(Node *);

        /**
        constructor for the twowaylist class
        */ 
        void prepare();

        /**
        prepends a string to the node

        @param text to be prepended to the node
        */ 
        void prepend(std :: string);

        /**
        apends a string to the node

        @param text to be apended to the node
        */ 
        void append(std :: string);

        /**
        prints the list from the head to the tail
        */ 
        void dump();

        /**
        prints the list from the tail to the head 
        */ 
        void dumpBack();

        /**
        clears the list 
        */ 
        void clear();

        /**
        checks if the list is empty 
        */ 
        bool empty();
    private:
        Node *head = 0;
        Node *tail = 0;
};