#include <iostream>

/*
            10

       5          8

     6   3      7

           9
 */

class Node // maybe struct
{
public:
    Node(int key, Node * parent=NULL, Node * left=NULL, Node * right=NULL)
        : key_(key), parent_(parent), left_(left), right_(right)
    {}
    int key_;
    Node * parent_;
    Node * left_;
    Node * right_;
};

std::ostream & operator<<(std::ostream & cout, const Node & node)
{
    cout << "<Node " << &node
         << " key:" << node.key_
         << ", parent:" << node.parent_
         << ", left:" << node.left_
         << ", right:" << node.right_
         << '>';
    return cout;
}

int max(int a, int b)
{
    return (a >= b ? a : b);
}

int height(Node * proot)
{
    if (proot == NULL)
    {
        std::cout << "height base case ... return -1\n";
        return -1;
    }
    else
    {
        std::cout << "height recursive ... left ... \n";
        int leftht = height(proot->left_);
        std::cout << "height recursive ... right ...\n";
        int rightht = height(proot->right_);
        int ht = 1 + max(leftht, rightht);
        std::cout << "height recursive ... return " << ht << '\n';
        return 1 + max(leftht, rightht); 
    }
}

int main()
{
    
    Node * p10 = new Node(10);
    Node * p5 = new Node(5);
    Node * p8 = new Node(8);
    Node * p6 = new Node(6);
    Node * p3 = new Node(3);
    Node * p7 = new Node(7);
    Node * p9 = new Node(9);
    p10->left_ = p5; p10->right_ = p8;
    p5->parent_ = p10; p5->left_ = p6; p5->right_ = p3;
    p8->parent_ = p10; p8->left_ = p7;
    p6->parent_ = p5;
    p3->parent_ = p5; p3->right_ = p9;
    p7->parent_ = p8; 
    p9->parent_ = p3;

    std::cout << (*p10) << '\n';
    std::cout << (*p5) << '\n';
    std::cout << (*p8) << '\n';
    std::cout << (*p6) << '\n';
    std::cout << (*p3) << '\n';
    std::cout << (*p7) << '\n';
    std::cout << (*p9) << '\n';

    std::cout << "height at 10:" << height(p10) << '\n';
    return 0;
}
