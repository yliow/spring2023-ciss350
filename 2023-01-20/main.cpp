// Make template
// Add operators +, *, etc so that you can do this:
//
// Mat< double > m(2, 3);
// m(0, 2) = -1;
// Mat< double > n(2, 3);
// n(0, 2) = 42;
// std::cout << m * 1.2 << '\n'; 
// std::cout << 1.2 * m << '\n'; 
// std::cout << m + n << '\n'; 
// std::cout << m - n << '\n'; 
// std::cout << m * 1.2 << '\n'; 
//
// Matrix mult:
// Mat< double > p(3, 4);
// std::cout << m * p << '\n';
//
// Matrix determinant, inverse
// Mat< double > q(2, 2);
// q(0,0) = 1;
// q(0,1) = 2;
// q(1,0) = 3;
// q(1,1) = 4;
// std::cout << det(q) << '\n';
// std::cout << q.inverse() << '\n';
// std::cout << q * q.inverse() << '\n'; // approx [[1,0],[0,1]]


#include <iostream>
#include "Mat.h" // Eigen2 -> used inside Google AI machine learning library Tensorflow

void f()
{
    Mat m(2, 3);
    // m.p_[2] = -1;
    m(0, 2) = -1;
    // m.p_[4] = 42;
    m(1, 1) = 42; // m.operator()(1, 2)
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
