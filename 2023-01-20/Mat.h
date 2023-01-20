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
    ~Mat()
    {
        delete [] p_;
    }
    //private:
    int nrows_, ncols_;
    double * p_;
};

inline
std::ostream & operator<<(std::ostream & cout, const Mat & m)
{
    // for (int i = 0; i < m.nrows_ * m.ncols_; ++i)
    // {
    //     cout << m.p_[i] << ' ';
    // }
    // cout << '\n';

    for (int r = 0; r < m.nrows_; ++r)
    {
        cout << '[';
        for (int c = 0; c < m.ncols_; ++c)
        {
            cout << m.p_[r * m.ncols_ + c] << ' ';
        }
        cout << ']' << '\n';
    }
    cout << '\n';
    return cout;
}

#endif

