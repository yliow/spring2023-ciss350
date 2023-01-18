// Mat.h

#ifndef MAT_H
#define MAT_T

#include <iostream>

class Mat
{
  public:
    Mat(int nrows, int ncols)
        : nrows_(nrows), ncols_(ncols), p_(new double[nrows * ncols])
    {}
  private:
    int nrows_, ncols_;
    double * p_;
};

inline
std::ostream & operator<<(std::ostream & cout, const Mat & m)
{
    return cout;
}

#endif

