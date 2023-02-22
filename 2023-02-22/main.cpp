#include <iostream>

// file: SLNode.h
class SLNode
{
public:
    SLNode(int key, SLNode * next=NULL)
        : key_(key), next_(next)
    {}
//private:
    int key_;
    SLNode * next_;
};

std::ostream & operator<<(std::ostream & cout, const SLNode & n)
{
    cout << "<SLNode " << &n
         << " key:" << n.key_
         << ", next:" << n.next_
         << ">";
    return cout;
}

// file: SLList.h
class SLList
{
public:
    SLList()
        : phead_(NULL)
    {}
    void insert_head(int key)
    {
        // TODO
    }
    void delete_head(int key)
    {
        // TODO
    }
//private:
    SLNode * phead_;
};

std::ostream & operator<<(std::ostream & cout, const SLList & list)
{
    cout << "<SLList " << &list << '\n';

    SLNode * p = list.phead_;
    while (p != NULL)
    {
        std::cout << (*p) << '\n';
        p = p->next_;
    }

    cout << ">";
    return cout;
}

int main()
{
    // 5 -> 3 -> 0 -> 1
    SLNode * n5 = new SLNode(5);
    SLNode * n3 = new SLNode(3);
    SLNode * n0 = new SLNode(0);
    SLNode * n1 = new SLNode(1);
    n5->next_ = n3;
    n3->next_ = n0;
    n0->next_ = n1;

    // std::cout << (*n5) << '\n';
    // std::cout << (*n3) << '\n';
    // std::cout << (*n0) << '\n';
    // std::cout << (*n1) << '\n';

    SLList list;
    
    delete n5;
    delete n3;
    delete n0;
    delete n1;
    return 0;
}
