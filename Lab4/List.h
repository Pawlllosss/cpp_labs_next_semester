#ifndef ListH
#define ListH

#include "Node.h"

class List
{
public:
    enum listPosition{Begin, End};

    List();
    List(const List &);

    ~List();

    List & insert(const Data & dataValue, List::listPosition position = End);
    bool find( const Data & dataValue );
    void print();
private:
    Node * root;
};
#endif
