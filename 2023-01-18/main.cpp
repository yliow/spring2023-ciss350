#include <iostream>
#include "Mat.h" // Eigen2 -> used inside Google AI machine learning library Tensorflow

int main()
{
    Mat m(2, 3);
    std::cout << m << '\n';
    // m(0, 0) = 3.14;
    // Mat n(m);
    // Mat p(1, 1);
    // p = m
    return 0;
}
