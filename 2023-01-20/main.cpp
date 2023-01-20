#include <iostream>
#include "Mat.h" // Eigen2 -> used inside Google AI machine learning library Tensorflow

void f()
{
    Mat m(2, 3);
    m.p_[2] = -1;
    m.p_[4] = 42;
    //m(1, 1) = 42; // m.operator()(1, 2)
    std::cout << m << '\n';
    
    Mat n(m);
    std::cout << n << '\n';

    Mat p(1, 1);
    p = m;
    std::cout << p << '\n';
}

int main()
{
    f();
    // m(0, 0) = 3.14;
    // Mat n(m);
    // Mat p(1, 1);
    // p = m
    return 0;
}
