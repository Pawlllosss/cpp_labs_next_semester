#include "List.h"
#include <iostream>
#include <typeinfo>

List::List()
{
    root = 0;
}

List::List(const List & listToCpy)
{
    Node * copiedListPtr = listToCpy.root;

    Node * newListPtr;
    Node * newListPreviousPtr;

    if(copiedListPtr)//sprawdzam czy aby nie przesylam pustej listy
    {
        root = new Node(*copiedListPtr->storedData);
        copiedListPtr = copiedListPtr->next;

        newListPreviousPtr = root;
    }


    while(copiedListPtr)
    {
        newListPtr = new Node(*copiedListPtr->storedData);
        newListPreviousPtr->next=newListPtr;


        newListPreviousPtr = newListPtr;
        copiedListPtr = copiedListPtr->next;
    }

}

List::~List()
{
    if(root)
        delete root;
}

List & List::insert(const Data & dataValue, listPosition position)
{
    Node * ptr = root;
    Node * newPtr = new Node(dataValue);


    if(!root)//jeżeli root jest pusty
        root = newPtr;
    else if (position == Begin)
    {
        newPtr->next = root;
        root = newPtr;
    }
    else
    {
        while(ptr->next)
            ptr = ptr->next;
        ptr->next = newPtr;
    }

    return *this;
}

void List::print()
{
    Node * ptr = root;

    std::cout<<"[ ";

    while(ptr)
    {
        ptr->storedData->printContent();
        std::cout<<" ";
        ptr = ptr->next;
    }

    std::cout<<"]"<<std::endl;
}

bool List::find( const Data & dataValue )
{
    Node * ptr = root;

    while(ptr)
    {
        if( ptr->storedData->isEqual(dataValue ))
            return true;

        ptr = ptr->next;
    }

    return false;
}
