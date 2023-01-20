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
    Mat(const Mat & m)
        : nrows_(m.nrows_), ncols_(m.ncols_), p_(new double[m.nrows_ * m.ncols_])
    {
        for (int i = 0; i < m.nrows_ * m.ncols_; ++i)
        {
            p_[i] = m.p_[i];
        }
    }
    const Mat & operator=(const Mat & m)
    {
        if (this != &m)
        {
            delete [] p_;
            nrows_ = m.nrows_;
            ncols_ = m.ncols_;
            p_ = new double[m.nrows_ * m.ncols_];
            for (int i = 0; i < m.nrows_ * m.ncols_; ++i)
            {
                p_[i] = m.p_[i];
            }
        }
        return *this;
    }
    int nrows() const
    {
        return nrows_;
    }
    int ncols() const
    {
        return ncols_;
    }
    double operator()(int r, int c) const
    {
        return p_[r * ncols_ + c];
    }
    double & operator()(int r, int c)
    {
        return p_[r * ncols_ + c];
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

    for (int r = 0; r < m.nrows(); ++r)
    {
        cout << '[';
        for (int c = 0; c < m.ncols(); ++c)
        {
            cout << m(r, c) << ' ';
        }
        cout << ']' << '\n';
    }
    cout << '\n';
    return cout;
}

#endif

