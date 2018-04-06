#include "Node.h"

Node::Node(const Data & dataToAdd) : next(0)
{
    storedData = dataToAdd.clone();
}

Node::~Node()
{
    delete storedData;

    if(next);
        delete next;
}
