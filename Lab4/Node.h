#ifndef NodeH
#define NodeH
#include "Data.h"

class List;

class Node
{
friend class List;
public:
    Node(const Data & dataToAdd);
    ~Node();
private:
    Data * storedData;
    Node * next;
};
#endif
