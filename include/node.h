/**
    Node header
    @file node.cpp, twoWaysList.cpp
    @author Maksym Kazhaiev
*/
#pragma once
#include<iostream>

class Node
{
    public:
        /**
        constructor for the node class
        */ 
        void prepare(std :: string);

        /**
        sets the text to the node

        @param text to be set to the node
        */ 
        void setData(std :: string);
        std :: string getData();

        /**
        sets the next node address

        @param text to be set to the node
        */ 
        void setNext(Node *);

        /**
        gets the next node address

        @return returns the address of the next node
        */  
        Node * getNext();

        /**
        sets the previous node address

        @param text to be set to the node
        */ 
        void setPrevious(Node *);

        /**
        gets the previous node address

        @return returns the address of the previous node
        */  
        Node * getPrevious();

    private:
        std :: string data = "";
        Node * next = 0;
        Node * previous = 0;
};